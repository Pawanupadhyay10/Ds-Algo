// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends

class Solution
{

    // Function to find the trapped water between the blocks.
public:
    int trappingWater(int arr[], int n)
    {
        // Code here
        int lo = 0, hi = n - 1, mi = 0, mr = 0, ans = 0;
        while (lo < hi)
        {
            if (arr[lo] < arr[hi])
            {
                if (arr[lo] > mi)
                {
                    mi = arr[lo];
                }
                else
                {
                    ans += (mi - arr[lo]);
                }
                lo++;
            }
            else
            {
                if (arr[hi] > mr)
                {
                    mr = arr[hi];
                }
                else
                {
                    ans += (mr - arr[hi]);
                }
                hi--;
            }
        }
        return ans;
    }
};

// { Driver Code Starts.

int main()
{

    int t;
    //testcases
    cin >> t;

    while (t--)
    {
        int n;

        //size of array
        cin >> n;

        int a[n];

        //adding elements to the array
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
    }

    return 0;
} // } Driver Code Ends