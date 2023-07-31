#include <iostream>
using namespace std;

// Print a Number is Prime or not till the given N value

bool Isprime(int n){
  for(int i=2;i<n;i++){
    if(n%i==0){
      return false;
    }
  }
  return true;
}

int main() {
  int n;
  cin >> n;

  for(int i=2;i<=n;i++){
    bool getPrime=Isprime(i);
    if(getPrime){
      cout << i << " is a prime Number" << endl;
    }else{
      cout << i << " is not a prime Number" << endl;
    }
  }
}

// Input 
// 13

// Output
// 2 is a prime Number
// 3 is a prime Number
// 4 is not a prime Number
// 5 is a prime Number
// 6 is not a prime Number
// 7 is a prime Number
// 8 is not a prime Number
// 9 is not a prime Number
// 10 is not a prime Number
// 11 is a prime Number
// 12 is not a prime Number
// 13 is a prime Number
