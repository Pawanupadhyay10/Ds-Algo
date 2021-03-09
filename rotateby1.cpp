// Rotate array by 1
#include <stdio.h>

void rotate(int arr[], int n);

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n] , i;
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        rotate(a, n);
        for (i = 0; i < n; i++)
            printf("%d ", a[i]);
        printf("\n");
    }
        return 0;
 } 
// logic function
void rotate(int arr[], int n)
{       
    for(int i=n-1;i>=1;i--){
        int temp=arr[i];
        arr[i]=arr[i-1];
        arr[i-1]=temp;
    }
}