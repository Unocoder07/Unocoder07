#include<bits/stdc++.h>
using namespace std;
void pairwiseSum(int arr[], int n)
{
	int sum = 0;
	for (int i = 0; i < n - 1; i+=2)
	{
		// adding the alternate numbers
		sum = arr[i] + arr[i + 1];
		cout<<sum;
		
	}

}


int main()
{   
      #ifndef ONLINE_JUDGE
    // freopen("input1.txt","r",stdin);
     freopen("output2.txt","w",stdout);
     #endif
	int arr[] = {4, 10, 15, 5, 6};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	pairwiseSum(arr, n);
	return 0;
}
