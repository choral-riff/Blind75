/*
Duplicate Integer
Given an integer array nums, return true if any value appears more than once in the array, otherwise return false.

Example 1:

Input: nums = [1, 2, 3, 3]

Output: true
Example 2:

Input: nums = [1, 2, 3, 4]

Output: false
*/


#include <algorithm>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        //base case
        if (nums.size() == 0){
            return false;
        }
        if (nums.size() == 1){
            return false;
        }
        //sort the nums vector
        sort(nums.begin(), nums.end());
        int counter = 0;
        for (int i = 0; i < nums.size()-1; i++){
            if (nums[i] == nums[i+1]){
                counter++;
            }
        }
        if (counter == 0){
            return false;
        }
        else {
            return true;
        }
    }
};
