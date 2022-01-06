#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(string str1,string str2){
        string str;
        int i = 0;
        while(i<str1.size()&&i<str2.size()){
            if(str1[i] != str2[i]){
                break;
            }
            str += str1[i];
            i++;
        }
        return str;
    }
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0)
        {
            return "";
        }
        string result = strs[0];
        for(int i = 1;i<strs.size();++i){
            result = longestCommonPrefix( result, strs[i])
        }
        return result;
    }
};