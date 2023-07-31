#include <iostream>
#include <math.h>
using namespace std;

int DecimalTobinaryConversion(int n){
        // Division Method
        int binaryNo = 0;
        int i =0;
        while(n>0){
           int result = n%2;
           int binaryNo = result* pow(10,i++) + binaryNo;
           n = n/2;
        }
        return binaryNo;
}

int DecimalTobinaryConversion2(int n){
        // Division Method
        int binaryNo = 0;
        int i =0;
        while(n>0){
           int result = (n & 1);
           int binaryNo = result* pow(10,i++) + binaryNo;
           n = n >> 1;
        }
        return binaryNo;
}

int binaryTodecimal(int n){

  while(n){
    int i=0;
    int decimal =0;
    int bit = n % 10;
    decimal = decimal + bit * pow(2 , i++);
    n = n/10;
  }
  return decimal;

}


int main() {
 int n;
 cin >> n;

 int binary = DecimalTobinaryConversion(n);
 cout << binary << endl;

}