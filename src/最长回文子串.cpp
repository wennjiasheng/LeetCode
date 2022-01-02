#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size()<2){
            return s;
        }
        vector< vector<int> > arr(s.size(),vector<int>(s.size()));
        int begin = 0;
        int end = 0;
        for(int i = 0;i<s.size();i++){
            arr[i][i] = true;
        }
        for(int i = 1;i<s.size();i++){
            for(int j = 0;j<s.size();j++){
                int k = j+i;
                if(k>=s.size()){
                    break;
                }
                if(s[j]!=s[k]){
                    arr[j][k] = false;
                }
                else if(k-j>2){
                    arr[j][k] = arr[j+1][k-1];
                } 
                else {
                    arr[j][k] = true;
                }
                if(arr[j][k] == true && (k-j>end-begin)){
                    begin = j;
                    end = k;
                }
            }
        }
        return s.substr(begin,end-begin+1);
    }
    
    
};