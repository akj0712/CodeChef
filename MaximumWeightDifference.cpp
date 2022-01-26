#include "bits/stdc++.h"
using namespace std;
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define INF 1000000000000000003
typedef signed short int ss;		// -10⁴ (to) 10⁴
typedef unsigned short int us;		// 00 (to) 2•10⁴
typedef signed int si;				// -10⁹ (to) 10⁹
typedef unsigned int ui;			// 00 (to) 2•10⁹
typedef signed long long int ll;	// -10¹⁸ (to) 10¹⁸
typedef unsigned long long int ull;	// 00 (to) 2•10¹⁸
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair

ll abh[1010];

void solve(){
	ll k, n, chef = 0, child = 0;
	cin >> k >> n;
	int arr[k];
	FOR(i, k)
	{
		cin >> arr[i];
	}
	sort(arr, arr+k);
	if (n <= k/2)
	{
		for(ll i = 0; i < n; i++)
		{
			child = child + arr[i];
		}
		for(ll i = n; i < k; i++)
		{
			chef = chef + arr[i];
		}
	}
	else
	{
		for(ll i = 0; i < k-n; i++)
		{
			child = child + arr[i];
		}
		for(ll i = k-n; i < k; i++)
		{
			chef = chef + arr[i];
		}
	}
	cout << abs(chef - child) << "\n";
}

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int T;
	cin >> T;
	while (T--) {
		solve();
	}
	return 0;
}
