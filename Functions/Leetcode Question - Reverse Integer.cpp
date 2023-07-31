#include <iostream>
#include <climits>
using namespace std;

// // Leet Code Question - Reverse Integer;

// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

// Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

int reverse(int x) {
        int rem = 0 , ans = 0;
        bool isNeg = false;
        if(x <= INT_MIN){
            return 0;
        }
        if(x < 0){
            isNeg = true;
            x = -x;
        }
        while(x > 0){
            if(ans > INT_MAX/10){
                return 0;
            }
          rem = x % 10;
          ans = ans *10 + rem;
          x = x/10;
        }
        return isNeg ? -ans : ans;
    }

int main() {
  int n;
  cin >> n;
  int Reversed_Integer = reverse(n);
  cout <<Reversed_Integer<< endl;
}

// Example 1:

// Input: x = 123
// Output: 321
// Example 2:

// Input: x = -123
// Output: -321
// Example 3:

// Input: x = 120
// Output: 21
 

// Constraints:

// -231 <= x <= 231 - 1