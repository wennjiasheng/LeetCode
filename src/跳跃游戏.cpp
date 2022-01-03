#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
        int end = 0;
        int count = 0;
        // while(end<nums.size()){
        //     int pos = 0;
        //     for(int i = start;i<end;i++){
        //         pos = max(pos,nums[i]+i);
        //     }
        //     start = end;
        //     end = pos+1;
        //     count++;
        // }
        int pos = 0;
        for(int i = 0;i<nums.size()-1;i++){
            pos = max(pos,nums[i]+i);
            if(i == end){
                end = pos;
                count++;
            }
        }
        return count;
    }
};