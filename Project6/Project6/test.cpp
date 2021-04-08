#include <iostream>
#include <string>
#include <queue>
#include <stack>
#include <vector>

using namespace std;

int Max_n(vector<vector<int>> &dp)
{
    int col = 0;
    int row = 0;
    if (dp.size() > 0)
    {
        int max = dp[0][0];
        int max2 = dp[dp.size() - 1][dp.size() - 1];
        for (int i = 0; i < dp.size(); ++i)
        {
            for (int j = 0; j < dp[i].size(); ++j)
            {
                if (dp[i][j] > max)
                {
                    max = dp[i][j];
                    col = i;
                    row = j;
                }
            }
        }
        for (int i = 0; i < dp.size(); ++i)
        {
            for (int j = 0; j < dp[i].size(); ++j)
            {
                if (dp[i][j] > max2 && row != j && col != i)
                {
                    max2 = dp[i][j];
                }
            }
        }
        return max2 + max;
    }
    return 0;
}


bool Solution(vector<int>& vec , int n)
{
    if (n == 1)
        return true;
    return (vec[n - 1] - vec[n - 2] == 1) && Solution(vec,n-1);
}
int main()
{
    vector<vector<int>> dp{ {1,2,3},{4,5,6},{7,8,5} };
    cout << Max_n(dp) << endl;

    return 0;
}
