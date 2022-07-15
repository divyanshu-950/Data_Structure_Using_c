#include <iostream>
using namespace std;
int maxSum(int arr[], int n, int k)
{
    if (n < k) {
        cout << "Invalid";
        return -1;
    }
  
    int max_sum = 0;
    for (int i = 0; i < k; i++)
        max_sum += arr[i];
    int window_sum = max_sum;
    for (int i = k; i < n; i++) {
        window_sum += arr[i] - arr[i - k];
        max_sum = max(max_sum, window_sum);
    }
  
    return max_sum;
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
    cout << "Max sum Is: "<<maxSum(arr, m, k);
    return 0;
}
