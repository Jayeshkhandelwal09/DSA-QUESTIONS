#include <iostream>
    
using namespace std;


void PrintColWise_Sum( int arr[][3] , int rows , int cols){
    // Printing sum Column Wise
    for(int i=0;i<rows;i++){
        int sum =0;
        for(int j=0;j<cols;j++){
            sum = sum + arr[j][i];
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

    // Printing 2D arrays with Column-Wise Sum

    PrintColWise_Sum(arr , rows , cols);
    
    return 0;
}
