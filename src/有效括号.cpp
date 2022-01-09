#include<iostream>
#include<string>
#include<stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        if(s.size()%2!=0){
            return false;
        }
        stack<char> stk;
        for(int i = 0;i<s.size();i++){
            if(s[i] == '('||s[i] == '['||s[i] == '{'){
                stk.push(s[i]);
            }
            else{
                if(stk.empty()){
                    return false;
                }
                if(s[i] == ')'&&stk.top() != '('){
                    return false;
                }
                else if(s[i] == ']'&&stk.top() != '['){
                    return false;
                }
                else if(s[i] == '}'&&stk.top() != '{'){
                    return false;
                }
                else{
                    stk.pop();
                }
            }
        }
        return stk.empty();
    }
};