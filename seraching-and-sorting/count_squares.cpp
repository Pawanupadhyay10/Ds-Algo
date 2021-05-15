// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    int countSquares(int N)
    {
        // code here
        int c = 0;
        vector<int> v;
        for (int i = 1; i * i < N; i++)
        {
            v.push_back(i * i);
            if (i * i < N)
            {
                c++;
            }
        }
        return c;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;

        cin >> N;

        Solution ob;
        cout << ob.countSquares(N) << endl;
    }
    return 0;
} // } Driver Code Ends