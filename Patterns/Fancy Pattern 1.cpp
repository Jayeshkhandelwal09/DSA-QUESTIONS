#include <iostream>
#include "assert.h"
using namespace std;

// fancy Pattern 1

int main() {
  int n;
  cin >> n;
  assert(n<=9);
  for(int row=0;row<n;row++){
    int start = 8-row;
    int num = row+1;
    int count_num = num;
    for(int col=0;col<17;col++){
        if(col==start && count_num>0){
          cout << num;
          start+=2;
          count_num--;
        }else{
          cout << "*";
        }
    }
    cout << endl;
  }

}

// This is not a generic code this can only run till the value of n<=9 
// You can manipulate the col loop according to your n value if u want to run this code higher than the value of 9 


// Input 
// 9

// Output
// ********1********
// *******2*2*******
// ******3*3*3******
// *****4*4*4*4*****
// ****5*5*5*5*5****
// ***6*6*6*6*6*6***
// **7*7*7*7*7*7*7**
// *8*8*8*8*8*8*8*8*
// 9*9*9*9*9*9*9*9*9


