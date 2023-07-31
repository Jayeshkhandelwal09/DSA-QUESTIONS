#include <iostream>
using namespace std;

// Numeric Palindrome Equilateral Pyramid

int main() {
  int n;
  cin >> n;

// 1st Part

  // space
  for(int row=0;row<n;row++){
   for(int space=0;space<n-row;space++){
    cout << " ";
   }
   
  // Numbers
   for(int col=1;col<=row+1;col++){
    cout << col;
   }

  //  Number2
  for(int col=row;col>=1;col--){
    cout << col;
  }
   cout << endl;
  }
}

// Input 
// 6

// Output
//       1
//      121
//     12321
//    1234321
//   123454321
//  12345654321
