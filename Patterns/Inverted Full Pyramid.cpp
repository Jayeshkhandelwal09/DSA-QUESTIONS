#include <iostream>
using namespace std;

// Inverted Pyramid

int main() {
  int n;
  cin >> n;
  for(int row=0;row<n;row++){
    for(int space=0;space<row;space++){
      cout << " ";
    }
    for(int star=0;star<n-row;star++){
      cout << "* ";
    }
    cout << endl;
  }
}

// Input
// 5

// Output
// * * * * * 
//  * * * * 
//   * * * 
//    * * 
//     * 