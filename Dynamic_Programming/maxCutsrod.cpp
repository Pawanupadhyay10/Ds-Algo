

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    //Function to find the maximum number of cuts.
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        int op1 = 0, op2 = 0, op3 = 0;
        //Your code here
        if (n == 0)
            return 0;
        if (n >= x)
            op1 = maximizeTheCuts(n - x, x, y, z);
        if (n >= y)
            op1 = maximizeTheCuts(n - y, x, y, z);
        if (n >= z)
            op1 = maximizeTheCuts(n - z, x, y, z);

        return 1 + max(op1, max(op2, op3));
    }
};

// { Driver Code Starts.
int main()
{

    //taking testcases
    int t;
    cin >> t;
    while (t--)
    {
        //taking length of line segment
        int n;
        cin >> n;

        //taking types of segments
        int x, y, z;
        cin >> x >> y >> z;
        Solution obj;
        //calling function maximizeTheCuts()
        cout << obj.maximizeTheCuts(n, x, y, z) << endl;
    }

    return 0;
} // } Driver Code Ends