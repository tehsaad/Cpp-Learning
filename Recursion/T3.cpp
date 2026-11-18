#include<iostream>
#include<array>
using namespace std;


int ways(int m, int n, int i = 0, int j = 0){
    if(i == m-1 && j == n-1){  // A Path is Found, Base Case
        return 1;
    }
    if(i >= m || j >= n){   //Out of Bound Handled
        return 0;   
    }
    return ways(m,n,i+1,j) + ways(m,n,i,j+1);    //Changed the Root to the Left and Right Child, Recursive Case
}

int main(){

    cout << "Enter the Grid Size, (m x n): ";
    int m,n;
    cin >> m >> n;

    int arr[m][n]= {0};
    // arr[m][n] is our Target,  Recursive way to find the number of ways to reach the target from (0,0) to (m-1,n-1)
    cout << "Number of ways to reach from (0,0) to (" << m-1 << "," << n-1 << "): " << ways(m,n,0,0) << endl;
}
