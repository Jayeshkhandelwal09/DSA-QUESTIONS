#include <iostream>
using namespace std;

// Numeric Hollow Half Pyramid

int main() {
  int n;
  cin >> n;
 for(int row=0;row<n;row++){
  for(int col=0;col<row+1;col++){
    if(col==0 || col==row || row==n-1){
      cout << col +1 ;
    }else{
      cout << " ";
    }
  }
  cout << endl;
 }
}

// Input 
// 5

// Output
// 1
// 12
// 1 3
// 1  4
// 12345
