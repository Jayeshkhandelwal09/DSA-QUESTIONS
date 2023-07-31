#include <iostream>
using namespace std;

// Full pyramid 2

int main() {
 int n;
 cin >> n;

 for(int row=0;row<n;row++){
  for(int space=0;space<n-row-1;space++){
    cout << " ";
  }
  for(int stars=0;stars<row+1;stars++){
    cout << "* ";
  }
  cout << endl;
 }
}

// Input 
// 5

// Output
//     * 
//    * * 
//   * * * 
//  * * * * 
// * * * * * 
