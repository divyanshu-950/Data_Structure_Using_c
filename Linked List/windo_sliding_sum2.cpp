#include <bits/stdc++.h>
using namespace std;
 
void printKMax(int a[], int n, int k)
{
    if (k == 1) {
        for (int i = 0; i < n; i += 1)
            cout << a[i] << " ";
        return;
    }
 
    int p = 0,
        q = k - 1,
        t = p,
        max = a[k - 1];
 
    while (q <= n - 1) {
        if (a[p] > max)
            max = a[p];
 
        p += 1;
        if (q == p && p != n) {
            cout << max << " ";
            q++;
            p = ++t;
 
            if (q < n)
                max = a[q];
        }
    }
}
 
int main()
{
    int arr[50];
    int m,i,k;
     printf("Enter Term of Array: ");
    scanf("%d",&m);
    printf("\nEnter Data: \n");
      for(i=0;i<m;i++)
      {
      	scanf("%d",&arr[i]);
	  }
	  printf("\nEnter Window size: ");
	  scanf("%d",&k);
    cout<<"these Value CAN Give Max sum: ";
    printKMax(arr, m, k);
 
    return 0;
}
