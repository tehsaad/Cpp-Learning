#include <iostream>
#include <filesystem>
#include <fstream>
#include <string>

using namespace std;
namespace fs = std::filesystem;

void files(){
    cout << "1. Read File\n2. Read Specific Line" << endl;
    int c;
    cin >> c;

    if (c == 1) {

        fs::path filePath = "data/a.csv";

        // Check if the file exists and is a regular file
        if (fs::exists(filePath) && fs::is_regular_file(filePath)) {
            cout << "The file exists!\n";
        }
        else {
            cout << "The file does not exist.\n";
        }
    }
    else if (c == 2) {

        fs::path filePath = "data/a.csv";

        // Check if the file exists and is a regular file
        if (fs::exists(filePath) && fs::is_regular_file(filePath)) {
            cout << "The file exists!\n";
        }
        else {
            cout << "The file does not exist.\n";
        }
    }}

void read(string path){

    ifstream file(path);

    string line;
    while(getline(file, line)){
        cout << line << endl;
    }

}


int main(){

string path ="data/Books.csv";
read(path);

}