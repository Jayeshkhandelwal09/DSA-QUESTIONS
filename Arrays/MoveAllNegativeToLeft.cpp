#include <iostream>
using namespace std;

void MoveallNegToleft(int*arr,int n){
  // Dutch National Flag Alogrith || 2 Pointer's Approach
  int l=0, h = n-1;
  while(l<h){
    if(arr[l]<0){
      l++;
    }
    else if(arr[h]>0){
      h--;
    }else{
      swap(arr[l],arr[h]);
    }
  }
}

int main() {
  int arr[] = {-1,-2,1,2,3,-5,-7};
  int n = sizeof(arr)/sizeof(arr[0]);

  MoveallNegToleft(arr,n);

  for(int i=0;i<n;i++){
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}

// Input
// -1,-2,1,2,3,-5,-7

// Output
// -1 -2 -7 -5 3 2 1 

