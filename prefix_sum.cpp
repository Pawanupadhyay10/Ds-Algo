// { Driver Code Starts
// A C++ program to find if there is a zero sum
// subarray
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        //Your code here
        int f = 0, s = 0;
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            s += arr[i];
            if (s == 0 or m[s] or arr[i] == 0)
            {
                f = 1;
                break;
            }
            else
            {
                m[s] = 1;
            }
        }
        if (f == 1)
            return 1;
        else
            return 0;
    }
};

// { Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution obj;
        if (obj.subArrayExists(arr, n))
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
} // } Driver Code Ends