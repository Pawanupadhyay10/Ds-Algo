// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
vector<int> find(int a[], int n, int x);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int arr[n], i;
        for (i = 0; i < n; i++)
            cin >> arr[i];
        vector<int> ans;
        ans = find(arr, n, x);
        cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}

// } Driver Code Ends

vector<int> find(int a[], int n, int x)
{
    // code here
    int idx1 = lower_bound(a, a + n, x) - a;
    int idx2 = upper_bound(a, a + n, x) - a - 1;
    if (idx1 <= idx2)
    {
        return {idx1, idx2};
    }
    else
        return {-1, -1};
}