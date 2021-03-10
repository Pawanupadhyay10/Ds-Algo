// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
//KADANE'S ALGO
//LOGIC PART
 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int arr[], int n){
        int max=0,max_th=0;
        for(int i=0;i<n;i++){
            max_th+=arr[i];
            if(max_th>max){
                max=max_th;
            }
            if(max_th<0){
                max_th=0;
            }
        }
      return max;
    }
};

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends