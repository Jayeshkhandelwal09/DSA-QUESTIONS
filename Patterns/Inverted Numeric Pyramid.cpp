#include <iostream>
using namespace std;

// Inverted Numeric Pyramid

int main() {
  int n;
  cin >> n;
  for(int row=0;row<n;row++){
    for(int col=0;col<n-row;col++){
      cout << col+1;
    }
    cout << endl;
  }
}

//Input
// 5

// Output
// 12345
// 1234
// 123
// 12
// 1
