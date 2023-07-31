#include <iostream>
using namespace std;

// Pascal's Triangle Pattern

int main() {
  int n;
  cin >> n;
  
  for(int row=1;row<=n;row++){
    int k=1;
    for(int col=1;col<=row;col++){
      cout << k << " ";
      k = k*(row-col)/col;
    }
    cout << endl;
  }
}


// Input 
// 8

// Output 
// 1 
// 1 1 
// 1 2 1 
// 1 3 3 1 
// 1 4 6 4 1 
// 1 5 10 10 5 1 
// 1 6 15 20 15 6 1 
// 1 7 21 35 35 21 7 1 



