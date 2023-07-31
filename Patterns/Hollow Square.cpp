#include <iostream>
using namespace std;

// Hollow Square 

int main() {
  int n;
  cin >> n;
  for(int row=0;row<n;row++){
    if(row==0 || row==n-1){
      for(int col=0;col<n;col++){
        cout << "* ";
      }
    }
        else{
      cout << "* ";
      for(int i=0;i<n-2;i++){
        cout << "  ";
      }
      cout << "* ";
    }
    cout << endl;
  }
}

// Generic code working for all the test cases

// Input
// 5


// Output
// * * * * * 
// *       * 
// *       * 
// *       * 
// * * * * * 

