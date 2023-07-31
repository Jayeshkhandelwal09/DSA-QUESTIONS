#include <iostream> 
using namespace std;

// Finding The factorial of a Number

int getfactorial(int n){
  int fact = 1;
  for(int i=1;i<=n;i++){
    fact = fact * i;
  }
  return fact; 
  cout << endl;
}

int main() {
 int n;
 cin >> n;
 int factorial = getfactorial(n);
 cout << factorial << endl;
}

// Input 
// 5

// Output
// 120

// Since we are on the beginner level we haven't made this code such optimised for a higher value because higher values need more storage in memory and when we use this type of functions the bigger values overflows the memory and gives us output as 0. If you want to store long value for now you can also use long long int  defined variable.But still for getting the output of much more bigger value we need to optimise the code and use some algorithms.