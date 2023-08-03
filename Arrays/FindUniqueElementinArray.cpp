#include <iostream>
#include <vector>
using namespace std;

// Find Unique element

int findUnique(vector<int> arr)
{
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }

    return ans;
}

int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the values" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    int UniqueElement = findUnique(arr);
    cout << "The unique Element in the array is : " << UniqueElement << endl;

    return 0;
}


// Input
// 1 1 2 3 3

// Output
// 2