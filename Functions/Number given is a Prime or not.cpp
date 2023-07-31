#include <iostream>
using namespace std;

//  Check the given number is a prime or not 

bool getPrime(int n){
  for(int i=2;i<n;i++){
    if(n%2==0){
      return false;
    }
  }
  return true;
}

int main() {
  int n;
  cin >> n;

  int IsPrime = getPrime(n);
  if(IsPrime){
    cout << n << " is a prime Number" << endl;
  }else{
    cout << n << " is not a prime Number" << endl;
  }
}

// Input 
// 5

// Output
// 5 is a prime Number