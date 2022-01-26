#include <bits/stdc++.h>

using namespace std;

int main (void){
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin >> arr[i];
		}
		sort(arr, arr+n);
		// cout << arr[1]-arr[0] << "\n";
		int min = arr[1]-arr[0];
		for (int i = 1; i < n; ++i)
		{
			if (arr[i] - arr[i-1] <= min)
			{
				min = arr[i] - arr[i-1];
			}
		}
		cout << min << "\n";
	}
	return 0;
}