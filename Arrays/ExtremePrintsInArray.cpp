#include <iostream>
using namespace std;

// Question name : Extreme Prints

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int size = 7;
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {

        if (start == end)
        {
            cout << arr[start] << " ";
        }
        else
        {
            cout << arr[start] << " ";
            cout << arr[end] << " ";
        }
        start++;
        end--;
    };
}

// Input
// [10,20,30,40,50,60,70,80]

// Output
// 10 80 20 70 30 60 40 50