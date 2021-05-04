// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    int sb(int arr[], int n, int x)
    {
        // Your code goes here
        int end = 0, start = 0, cur_sum = 0;
        int min_l = n + 1;
        while (end < n)
        {
            while (cur_sum <= x && end < n)
            {
                cur_sum += arr[end];
                end++;
            }
            while (cur_sum > x && start < n)
            {
                if (end - start < min_l)
                    min_l = end - start;
                cur_sum -= arr[start];
                start++;
            }
        }
        return min_l;
    }
};

// { Driver Code Starts.

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        cout << obj.sb(a, n, x) << endl;
    }
    return 0;
} // } Driver Code Ends