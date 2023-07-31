#include <iostream>
using namespace std;

// Solid Rectangles

int main() {
  int n;
  int m;
  cin >> n;
  cin >> m;
  for(int row=0;row<n;row++){
    for(int col=0;col<m;col++){
      cout << "* ";
    }
    cout << endl;
  }
}


// Input
// 5
// 5

// Output
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 
