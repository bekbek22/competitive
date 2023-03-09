#include <bits/stdc++.h>
using namespace std;

int editDistDP(string str1, string str2, int m, int n)
{
    int dp[m + 1][n + 1];
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0)
                dp[i][j] = j; // Min. operations = j
            else if (j == 0)
                dp[i][j] = i; // Min. operations = i
            else if (str1[i - 1] == str2[j - 1])
                dp[i][j] = dp[i - 1][j - 1];
            else
                dp[i][j] = 1 + min({dp[i][j - 1],dp[i - 1][j],dp[i - 1][j - 1]});
        }
    }
    return dp[m][n];
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string sub_pro, sub_test;
    int cost,check;
    cin >> sub_pro; 
    cin >> sub_test;

    cost = editDistDP(sub_pro, sub_test, sub_pro.size(), sub_test.size());
    if(cost < ceil(max(sub_pro.size(),sub_test.size())/2.0)){
        check = 1;
    }
    else{
        check = 0;
    }
    
    cout << cost << " " << check;
    return 0;
}