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

int xyz[1010];
int arr[1010];

void solve(){
	int n, m, a, b;
	cin >> n >> m;
	for (int i = 1; i <= m; ++i)
	{
		cin >> a;
		arr[a] = 1;
	}
	// for (int i = 1; i <= n; ++i)
	// {
	// 	cout << arr[i] << "\n";
	// }
	for (int i = 1; i <= n; ++i)
	{
		if (arr[i] == 0)
		{
			
		}
	}

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
