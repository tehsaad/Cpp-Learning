// Practice

#include <iostream>
using namespace std;

class Rectangle {
public:
    double length;
    double width;
};

void area(Rectangle &rect) {
    cout << "Area of Rectangle: " << rect.length * rect.width << endl;
}
void perimeter(Rectangle &rect) {
    cout << "Perimeter of Rectangle: " << 2 * (rect.length + rect.width) << endl;
}

int main() {
    Rectangle rect1;

    cout << "Enter length of rectangle: ";
    cin >> rect1.length;
    cout << "Enter width of rectangle: ";
    cin >> rect1.width;

    area(rect1);
    perimeter(rect1);

    return 0;
}
