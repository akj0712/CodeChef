#include<bits/stdc++.h>

using namespace std;

int main () {
	long long m, fact = 1;
	int n;
	cin >> n;
	while(n--){
		cin >> m;
		for (int i = 1; i <= m ; ++i)
		{
			fact = fact * i;
		}
		cout << fact << "\n" ;
		fact = 1;
	}
	return 0;
}