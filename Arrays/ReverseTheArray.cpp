#include <iostream>    
using namespace std;

// Reverse the array 

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int size = 7;

    int start = 0;
    int end = size - 1;

    while(start <= end){
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }
    // /Printing the array after reversing
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }

}

// Input
// 10, 20, 30, 40, 50, 60, 70

// Output
// 70 60 50 40 30 20 10 