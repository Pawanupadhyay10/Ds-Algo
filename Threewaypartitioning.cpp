class Solution
{
public:
    //Function to partition the array around the range such
    //that array is divided into three parts.
    void threeWayPartition(vector<int> &A, int a, int b)
    {
        // code here
        int l = 0;
        int r = A.size() - 1;
        for (int i = 0; i < r; i++)
        {
            if (A[i] < a)
            {
                swap(A[i], A[l]);
                l++;
            }
            else if (A[i] > b)
            {
                swap(A[i], A[r]);
                r--;
                i--;
            }
        }
    }
};