#include <iostream>
using namespace std;

// Hollow rectangle 

int main() {
  int n;
  int m;
  cin >> n;
  cin >> m;
  for(int row=0;row<n;row++){
    if(row==0 || row==n-1){
      for(int col=0;col<m;col++){
        cout << "* ";
      }
    }
        else{
      cout << "* ";
      for(int i=0;i<m-2;i++){
        cout << "  ";
      }
      cout << "* ";
    }
    cout << endl;
  }
}

// Generic code working for all the test cases

// Input
// 6
// 7


// Output
// * * * * * * * 
// *           * 
// *           * 
// *           * 
// *           * 
// * * * * * * * 
