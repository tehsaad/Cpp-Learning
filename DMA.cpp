#include <iostream>
using namespace std;

int** getInput(int& rows, int*& rowSizes) {
    std::cout << "Enter Elements Separated by \"Enter\" on each Row." << std::endl;
    std::cout << "Press \"R\" for New Row. Press \"R\" on an Empty Row to Stop." << std::endl;

    int extendableCapacity = 2;
    rows = 0;
    int** matrix = new int* [extendableCapacity];
    rowSizes = new int [extendableCapacity];

    int size = 4;
    int counter = 0;
    int* row = new int [size];

    auto ensureInnerCapacity = [&]() {
        if (counter >= size) {++
            size *= 2;
            int* newRow = new int [size];
            for (int i = 0; i < counter; i)
                newRow[i] = row[i];
            delete[] row;
            row = newRow;
        }
    };

    auto ensureOuterCapacity = [&]() {
        if (rows >= extendableCapacity) {
            extendableCapacity *= 2;
            int** newMatrix = new int* [extendableCapacity];
            int* newRowSizes = new int [extendableCapacity];
            for (int i = 0; i < rows; i++) {
                newMatrix[i] = matrix[i];
                newRowSizes[i] = rowSizes[i];
            }
            delete[] matrix;
            delete[] rowSizes;
            matrix = newMatrix;
            rowSizes = newRowSizes;
        }
    };

    auto shrinkToExact = [&]() {
        int* exactSize = new int [counter];
        for (int i = 0; i < counter; i++)
            exactSize[i] = row[i];
        delete[] row;
        return exactSize;
    };

    char buffer[100];
    while (std::cin.getline(buffer, 100)) {
        if ((buffer[0] == 'R' || buffer[0] == 'r') && buffer[1] == '\0') {
            if (counter == 0) {
                delete[] row;
                break;
            }

            ensureOuterCapacity();
            matrix[rows] = shrinkToExact();
            rowSizes[rows] = counter;
            rows++;

            size = 4;
            counter = 0;
            row = new int[size];
            continue;
        }

        int i = 0;
        bool negative = false;
        if (buffer[0] == '-') {
            negative = true;
            i++;
        }

        bool valid = (buffer[i] != '\0');
        int value = 0;
        while (buffer[i] != '\0') {
            if (buffer[i] < '0' || buffer[i] > '9') {
                valid = false;
                break;
            }
            value = value * 10 + (buffer[i] - '0');
            i++;
        }

        if (valid) {
            if (negative) {
                value = -value;
            }
            row[counter++] = value;
            ensureInnerCapacity();
        } else {
            std::cout << "Skipped Non-Digit Input" << std::endl;
        }
    }

    return matrix;
}

int main() {   //
    int rows;
    int* rowSizes;
    int** matrix = getInput(rows, rowSizes);

    std::cout << "You entered:" << std::endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rowSizes[i]; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
        delete[] matrix[i];
    }

    delete[] matrix;
    delete[] rowSizes;

    return 0;
}