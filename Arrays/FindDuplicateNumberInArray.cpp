#include <iostream>
#include <vector>
using namespace std;

// LeetCode Question : Find the Duplicate 


// 287. Find the Duplicate Number
// Medium
// 20.4K
// 3.2K
// Companies
// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

// There is only one repeated number in nums, return this repeated number.

// You must solve the problem without modifying the array nums and uses only constant extra space.

 

// Example 1:

// Input: nums = [1,3,4,2,2]
// Output: 2
// Example 2:

// Input: nums = [3,1,3,4,2]
// Output: 3
 

// Constraints:

// 1 <= n <= 105
// nums.length == n + 1
// 1 <= nums[i] <= n
// All the integers in nums appear only once except for precisely one integer which appears two or more times.

int findDuplicate(vector<int> &nums)
{
    // Sorting approach;
    //     sort(nums.begin(),nums.end());
    //     for(int i=0;i<nums.size()-1;i++){
    //         if(nums[i]==nums[i+1]){
    //             return nums[i];
    //         }
    //     }
    //     return -1;
    // }

    //  2. Visitor approach;
    // int ans = -1;
    // for(int i=0;i<nums.size();i++){
    //     int index = abs(nums[i]);
    //     if(nums[index]<0){
    //         ans = index;
    //         break;
    //     }
    //     nums[index] *= -1;
    // }
    // return ans;

    // Positioning approach;
    while (nums[0] != nums[nums[0]])
    {
        swap(nums[0], nums[nums[0]]);
    }
    return nums[0];
}

int main()
{
    int n; // Number of elements in the array
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }

    int result = findDuplicate(nums);
    cout << "Duplicate number: " << result << endl;

    return 0;
}

// In the above solution we have Changed the array but as per the given question we must not change the array ,
// But as we are in the learning phase We will be optimising the code as soon as we learn binary search algorithms
// Till then these 3 are the best approaches you can have to solve this question.

