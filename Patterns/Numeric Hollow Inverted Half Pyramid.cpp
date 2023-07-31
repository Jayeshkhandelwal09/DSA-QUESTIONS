#include <iostream>
using namespace std;

// Numeric Hollow Inverted half Pyramid

int main() {
 int n;
 cin >> n;

 for(int row=0;row<n;row++){
  for(int col=row+1;col<=n;col++){
    if(col==row+1 || col==n || row==0){
      cout << col;
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
// 12345
// 2  5
// 3 5
// 45
// 5
