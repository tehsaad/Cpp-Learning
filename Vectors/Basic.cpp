#include <iostream>
#include <vector>
using namespace std;

int main() {

//    vector<int> numbers = {1, 2, 3, 4, 5};
//    vector<int> vec;   
//    vector<int> vec(3, 0);    //{0,0,0}

//    Dynamic array and Dynamic memory allocation, Stored in Heap
//    Data is Stored During Runtime, 
//    Size is not fixed, Can be resized, Can be initialized with values

    vector<int> vec;
    
    vec.push_back(10);
    vec.push_back(20);    //Pushes the value 20 at the end of the vector
    vec.push_back(30);    

for(int e: vec){
    cout<<e<<endl;  
 }

    vec.pop_back();    //Removes the last element of the vector  {10, 20}
    
    vec.front() = 100;    //Changes the first element of the vector to 100
    vec.back() = 200;     //Changes the last element of the vector to 200
    vec.at(1) = 300;    //Changes the element at index 1 to 300

for(int e: vec){
    cout<<e<<endl;  
 }
 
    cout << "Size of vector: " << vec.size() << endl;    //Returns the size of the vector                 //3   1-2-3
    cout << "Capacity of vector: " << vec.capacity() << endl;    //Returns the capacity of the vector         //4   1-2-4-8-16

    //Every time the size of the vector exceeds its capacity, the capacity is doubled.

    return 0;
}