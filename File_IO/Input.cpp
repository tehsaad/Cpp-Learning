#include <iostream>
#include <string>
#include <fstream>
using namespace std;

/*
fstream- Compiler Header
fstreambase
-ifstream
-ofstream
*/
//   fstream never reads or write after a Space

int main(){
    //File is read by the constructor of the Object of the the header
 
string st = " Tehreem Naveed";
ofstream out("data.txt");
    out << st;

string str;
ifstream in("data2.txt");
getline(in, str);
cout << str << endl;

    return 0;
}