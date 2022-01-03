#include<iostream>
#include<vextor>


using namespace std;

class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> arr;
        for(int i = 0;i<nums.size();i++){
            arr.push_back(to_string(nums[i]));

        }
        auto tep = [](string left,string right){
            return left + right >right +left;
        };
        sort(arr.begin(),arr.end(),tep);
        string str ;
        for(int i = 0;i<arr.size();i++){
            str += arr[i];
        }
        if(str[0] == '0'){
            return "0";
        }
        return str;
    }
};