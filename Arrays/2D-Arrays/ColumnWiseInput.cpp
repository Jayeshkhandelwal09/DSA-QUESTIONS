#include <iostream>
    
using namespace std;

int main()
{
    int arr[3][3];
    int rows = 3;
    int cols = 3;

// Taking input column Wise
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin >> arr[j][i];
        }
    }

// Printing 2D array Column Wise
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    
    return 0;
}
