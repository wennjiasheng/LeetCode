#include<iostream>



using namespace std;


long dectoBin(int dec){
    long result = 0,temp = dec, j = 1;
    while(temp){
        result = result + j *(temp%2);
        temp = temp/2;
        j = j *10;
    }
    return result;
}
long long  fun(int n){
    // if(n == 0){
    //     return 0;
    // }
    // if(n == 1){
    //     return 1;
    // }
    // if(n == 2){
    //     return 1;
    // }
    // return fun(n-1)+fun(n-2);
    long long sum = 1,pre = 0,next = 1;
    for(int i = 2;i<=n;i++){
        sum  = pre + next;
        pre = next;
        next = sum;
    }
    return sum;
}
int main(){
    cout<<fun(50)<<endl;
    cout<<dectoBin(10)<<endl;
    return 0;
}

