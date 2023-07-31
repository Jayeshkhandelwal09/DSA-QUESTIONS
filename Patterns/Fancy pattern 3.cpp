#include <iostream>
using namespace std;

// fancy pattern 3

int main() {
  int n;
  cin >> n;

  for(int row=0;row<n;row++){
    int cond = row <= n/2 ? 2*row : 2*(n-row-1);
    for(int col=0;col<=cond;col++){
      if(col<=cond/2){
        cout << col+1;
      }else{
        cout << cond-col+1;
      }
    }
    cout << endl;
  }
  
}

// Input 
// 5

// Output 
// 1
// 121
// 12321
// 121
// 1


