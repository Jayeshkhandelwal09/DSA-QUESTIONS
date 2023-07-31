#include <iostream>
using namespace std;

// fancy pattern 2

int main() {
  int n;
  cin >> n;
  
  int c=1;
  for(int row=0;row<n;row++){
    for(int col=0;col<row+1;col++){
      cout << c;
      c++;
      if(col<row){
        cout << "*";
    }
  }
  cout << endl;
}
  int start= c- n;
  for(int row=0;row<n;row++){
    int k=start;
    for(int col=0;col<n-row;col++){
      cout << k;
      k++;
      if(col<n-row-1){
        cout << "*";
      }
    }
    start = start - (n-row-1);
    cout << endl;
  }
  
}

// Input 
// 5

// Output 
// 1
// 2*3
// 4*5*6
// 7*8*9*10
// 11*12*13*14*15
// 11*12*13*14*15
// 7*8*9*10
// 4*5*6
// 2*3
// 1
