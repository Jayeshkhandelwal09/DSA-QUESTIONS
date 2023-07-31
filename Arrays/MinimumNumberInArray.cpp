#include <iostream>
using namespace std;

// Find Maximum in the array

int main()
{
    int arr[] = {1,23,4,5,6,7,8,9,10};
    int size = 10;
    int min = INT32_MAX;
    
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout << "Minimum Number in the array is : " << min << endl;
}


// Input
// [1,23,4,5,6,7,8,9,10]

// Output 
// 1
