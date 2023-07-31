#include <iostream>
using namespace std;

// Find area of a circle using a function

float AOC(int r){
  float result = 3.14 * r * r;
  return result;
}

int main() {
  float r;
  cin >> r;

  float area_of_circle = AOC(r);
  cout << area_of_circle << endl;
}

// Input 
// r =5

// Output 
// 78