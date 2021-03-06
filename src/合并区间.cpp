#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<vector<int> > merge(vector<vector<int> >& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int> > ans;
        for (int i = 0; i < intervals.size();) {
            int t = intervals[i][1];
            int j = i + 1;
            while (j < intervals.size() && intervals[j][0] <= t) {
                t = max(t, intervals[j][1]);
                j++;
            }
            vector<int> arr = {1};
            ans.push_back({ intervals[i][0], t });
            i = j;
        }
        return ans;

    }
};

int main(){
    return 0;
}