#include<bits/stdc++.h>

using namespace std;

int main () {
	int t;
	cin >> t;
	while(t--)
	{
		int a, b, sum = 0;
		bool flag = false;
		cin >> a >> b;
		int arr[a];

		for (int i = 0; i < a; ++i)
		{
			cin >> arr[i];
		}
		sort(arr, arr+a, greater<>());
		int i;
		for (i = 0; i < a; ++i)
		{
			sum = sum + arr[i];

			if (sum >= b)
			{
				flag = true;
				break;
			}
		}
		if (flag)
		{
			cout << i+1 << "\n";
		}
		else
		{
			cout << -1 << "\n";		}
		

	}
	return 0;
}