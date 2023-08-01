#include <iostream>
    
using namespace std;


void PrintRowWise_Sum( int arr[][3] , int rows , int cols){
    // Printing sum row Wise
    for(int i=0;i<rows;i++){
        int sum =0;
        for(int j=0;j<cols;j++){
            sum = sum + arr[i][j];
        }
        cout << sum << endl;
    }
}

int main()
{
    int arr[3][3];
    int rows = 3;
    int cols = 3;

    // Taking Input
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin >> arr[i][j];
        }
    }

    // Printing 2D arrays with Row-Wise Sum

    PrintRowWise_Sum(arr , rows , cols);
    
    return 0;
}
