// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int min(int x, int y, int z)
    {
        return min(min(x, y), z);
    }
    int editDistance(string s, string t)
    {
        // Code here
        int m = s.length();
        int n = t.length();
        int dp[m + 1][n + 1];

        // Fill d[][] in bottom up manner
        for (int i = 0; i <= m; i++)
        {
            for (int j = 0; j <= n; j++)
            {
                // If first string is empty, only option is to
                // insert all characters of second string
                if (i == 0)
                    dp[i][j] = j; // Min. operations = j

                // If second string is empty, only option is to
                // remove all characters of second string
                else if (j == 0)
                    dp[i][j] = i; // Min. operations = i

                // If last characters are same, ignore last char
                // and recur for remaining string
                else if (str1[i - 1] == str2[j - 1])
                    dp[i][j] = dp[i - 1][j - 1];

                // If the last character is different, consider
                // all possibilities and find the minimum
                else
                    dp[i][j] = 1 + min(dp[i][j - 1],      // Insert
                                       dp[i - 1][j],      // Remove
                                       dp[i - 1][j - 1]); // Replace
            }
        }

        return dp[m][n];
    }
};

// { Driver Code Starts.
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends