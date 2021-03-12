#include<bits/stdc++.h>
using namespace std;

// int main(){
// 	#ifndef ONLINE_JUDGE
// 	freopen("input.txt","r",stdin);
// 	freopen("output.txt","w",stdout);
// 	#endif
	//Only logic function
//find Duplicate numbers
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if((nums[i+1]-nums[i])==0){
                ans=nums[i+1];
            }
        }
        return ans;
    }
};