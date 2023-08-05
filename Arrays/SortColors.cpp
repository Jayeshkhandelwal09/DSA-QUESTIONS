// Leet Code Question : Sort Colors
// Medium
// 16K
// 561
// Companies
// Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

// We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

// You must solve this problem without using the library's sort function.

 

// Example 1:

// Input: nums = [2,0,2,1,1,0]
// Output: [0,0,1,1,2,2]
// Example 2:

// Input: nums = [2,0,1]
// Output: [0,1,2]
 

// Constraints:

// n == nums.length
// 1 <= n <= 300
// nums[i] is either 0, 1, or 2.
 

// Follow up: Could you come up with a one-pass algorithm using only constant extra space?


// Solution 

class Solution {
public:
    void sortColors(vector<int>& nums) {
        // 1st Counting Approach    
        // int zero , ones , twos;
        // zero=ones=twos=0;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==0){
        //         zero++;
        //     }else if(nums[i]==1){
        //         ones++;
        //     }else{
        //         twos++;
        //     }
        // }
        // int i=0;
        // while(zero--){
        //     nums[i] = 0;
        //     i++;
        // }
        // while(ones--){
        //     nums[i] = 1;
        //     i++;
        // }
        // while(twos--){
        //     nums[i] = 2;
        //     i++;
        // }

        // 2. 3 Pointer's Approach
        int l=0 , m=0 , h= nums.size()-1 ;
        while(m<=h){
            if(nums[m]==0){
                swap(nums[l] , nums[m]);
                l++;
                m++;    
            }
            else if(nums[m]==1){
                m++;
            }
            else{
                swap(nums[h],nums[m]);
                h--;
            }
        }
    }
};


// I have used two methods to solve this question 
// 1. Counting approach
// 2. 3 Pointer's approach

// Tc : O(n) Sc:O(1);