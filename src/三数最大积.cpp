#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums[1]>=0){
            return nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3];
        }else{
            return max(nums[0]*nums[1]*nums[nums.size()-1],nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3]);
        }
        
    }
};
