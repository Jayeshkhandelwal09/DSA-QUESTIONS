#include <iostream>
using namespace std;

// Count the Number of 0's and 1's in the array

int main(){
    int arr[] = {1,0,1,0,0,0,1,1,0,1,0};
    int size = 11;
    int NumZero = 0;
    int NumOne = 0;

    for(int i=0;i<size;i++){
        if(arr[i] == 0){
            NumZero++;
        };
        if(arr[i] == 1){
            NumOne++;
        };
    }

    cout<< "Number of Zeros are : " << NumZero << endl;
    cout<< "Number of Ones are : " << NumOne << endl;
    
}

//Input 
// [1,0,1,0,0,0,1,1,0,1,0];

// Output
// 6
// 5
