#include <iostream>
using namespace std;

// Find the number is odd or Even using a function

// I have provided two Approach to solve this question
// first is by using modulus and second is by using bitwise operations 

bool EOD(int number){
  if(/*number % 2 == 0*/ (number&1)==0){
      return true;
  }else{
    return false;
  }
}

int main() {
 int number ;
 cin >> number;

 bool eod = EOD(number);

 if(eod){
  cout << number << " is a Even Number" << endl;
 }else{
  cout << number << " is a Odd Number" << endl;
 }
}


// Input 
// 5

// Output 
// 5 is a Odd Number