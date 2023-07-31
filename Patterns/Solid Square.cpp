#include <iostream>
using namespace std;

// Solid Square

int main() {
  int n;
  cin >> n;
  for(int row=0;row<n;row++){
    for(int col=0;col<n;col++){
      cout << "* ";
    }
    cout << endl;
  }
}
// Generic Code working for all types of test cases
// Input
// 5

// Output
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 
