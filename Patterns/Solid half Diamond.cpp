#include <iostream>
using namespace std;

// Solid half Diamond

int main() {
  int n;
  cin >> n;

  for(int row=0;row<2*n-1;row++){
    int cond = row<n ? row : n-(row%n) -2;
    for(int col=0;col<=cond;col++){
      cout << "*";
    }
    cout << endl;
  }
}


// Input 
// 5

// Output
// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *

