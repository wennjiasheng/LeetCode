#include<iostream>


using namespace std;
 
class Solution {
public:
    bool Istwo(int n){
        // if(n<=0){
        //     return false;
        // }
        // if(n==1){
        //     return true;
        // }
        // return n%2==0 && IsThree(n/2);
        int flag = 0;
        while(n>0){
            flag += (n&1);
            n >>= 1;//n /=2;
        }
        return flag == 1;
    }
    bool IsThree(int n){
        if(n<=0){
            return false;
        }
        if(n==1){
            return true;
        }
        return n%3==0 && IsThree(n/3);
    }
    bool IsFour(int n){
        if(n<=0){
            return false;
        }
        if(n==1){
            return true;
        }
        return n%4==0 && IsThree(n/4);
    }
};