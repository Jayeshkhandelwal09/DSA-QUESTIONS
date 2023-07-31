#include <iostream>
using namespace std;

// Inverted Half Pyramid

int main() {
 int n;
 cin >> n;
 for(int row=0;row<n;row++){
  for(int col=0;col<n-row;col++){
    cout << "* ";
 }
   cout << endl;
}
}

// Input 
// 6

// Output
// * * * * * * 
// * * * * * 
// * * * * 
// * * * 
// * * 
// * 
