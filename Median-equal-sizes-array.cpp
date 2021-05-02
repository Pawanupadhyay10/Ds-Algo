
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
public:
    int find_median(vector<int> v)
    {
        // Code here.
        int N = v.size();
        sort(v.begin(), v.end());
        if (N % 2 == 0)
        {
            return (v[N / 2 - 1] + v[N / 2]) / 2;
        }
        else
        {
            return v[N / 2];
        }
    }
};

// { Driver Code Starts.
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        Solution ob;
        int ans = ob.find_median(v);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends