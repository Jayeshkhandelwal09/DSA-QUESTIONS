#include <iostream>
using namespace std;

// This is a basic linear Search algorithm used to find a particular Element in an array;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    int key;
    cin >> key;
    bool flag = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            flag = 1;
        }
    }

    if (flag == 1)
    {
        cout << "Present" << endl;
    }
    else
    {
        cout << "Not present" << endl;
    }
}

// Input 
// 4
// 6


// Output 
// Present
// Not present