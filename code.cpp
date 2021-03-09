#include<bits/stdc++.h>
using namespace std;

// int main(){
// 	#ifndef ONLINE_JUDGE
// 	freopen("input.txt","r",stdin);
// 	freopen("output.txt","w",stdout);
// 	#endif
// 	//Only logic function  
// }
//logic function
//union of unsorted arrays via c++stl map 
int doUnion(int a[], int n, int b[], int m)  {
    //code here
    int c=0;
     // Defining map container mp
    map<int, int> mp; 
   
    // Inserting array elements in mp
    for (int i = 0; i < n; i++)
        mp.insert({ a[i], i }); 
   
    for (int i = 0; i < m; i++)
        mp.insert({ b[i], i });
    for (auto itr = mp.begin(); itr != mp.end(); itr++){
        c++;
    }
    return c;
}