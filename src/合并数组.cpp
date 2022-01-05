#include<iostream>
#include<vector>
using namespace std;


vector<int> fun(vector<int> &arr1,vector<int> &arr2){
    if(arr1.size() == 0){
        return arr2;
    }
    if(arr2.size() == 0){
        return arr1;
    }
    vector<int> result;
    int i = 0,j = 0;
    while(i<arr1.size() && j<arr2.size()){
    if(arr1[i] > arr2[j]){
        result.push_back(arr2[j]);
        j++;
    }
    else{
        result.push_back(arr1[i]);
        i++;
    }
    }
    if(i<arr1.size()){
        for(;i<arr1.size();i++){
            result.push_back(arr1[i]);
        }
    }
    if(j<arr2.size()){
        for(;j<arr2.size();j++){
            result.push_back(arr2[j]);
        }
    }
    return result;
}

// int main(){
//     vector<int> arr1;
//     arr1.push_back(1);
//     arr1.push_back(2);
//     arr1.push_back(3);
//     vector<int> arr2;
//     arr2.push_back(5);
//     arr2.push_back(6);
//     vector<int> result = fun(arr1,arr2);
//     for(int i = 0;i<result.size();i++){
//         cout<<result[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }
