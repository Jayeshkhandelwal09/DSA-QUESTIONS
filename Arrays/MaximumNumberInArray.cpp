#include <iostream>
using namespace std;

// Find Maximum in the array

int main()
{
    int arr[] = {1,23,4,5,6,7,8,9,10};
    int size = 10;
    int max = INT32_MIN;
    
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout << "Maximum Number in the array is : " << max << endl;
}


// Input
// [1,23,4,5,6,7,8,9,10]

// Output 
// 23
