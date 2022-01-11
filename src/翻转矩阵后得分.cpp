// 有一个二维矩阵 A 其中每个元素的值为 0 或 1 。

// 移动是指选择任一行或列，并转换该行或列中的每一个值：将所有 0 都更改为 1，将所有 1 都更改为 0。

// 在做出任意次数的移动后，将该矩阵的每一行都按照二进制数来解释，矩阵的得分就是这些数字的总和。

// 返回尽可能高的分数。


#include<iostream>

#include<vector>
using namespace std;


class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
//step1:翻转所有行，保证第一列全为1
        int m=grid.size(),n=grid[0].size();
        for (int i=0;i<m;i++)
        {
            if (grid[i][0]!=1)
            {
                //翻转该行
                for (int j=0;j<n;j++)
                {
                    grid[i][j]=!grid[i][j];
                }
            }
        }
        //step2:从第二列开始，检查该列的1的数量是否大于等于0的数量，如果不是，则翻转该列
        for (int j=1;j<n;j++)
        {
            int count=0;
            for (int i=0;i<m;i++)
            {
                if (grid[i][j]) count++;
            }
            if (count<(m+1)/2)
            {
                for (int i=0;i<m;i++)
                {
                    grid[i][j]=!grid[i][j];
                }
            }
        }
        //step3:计算结果并返回
        int num=0;
        for(int j=0;j<n;j++)
        {
            int temp=pow(2,n-j-1);
            for (int i=0;i<m;i++)
            {
                num+=grid[i][j]*temp;
            }
        }
        return num;
    }
};