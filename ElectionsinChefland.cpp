#include "bits/stdc++.h"
using namespace std;
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define INF 1000000000000000003
typedef long long int ll;			//10^-18 - 10^18
typedef unsigned short int us;		//0 - 2*10^4
typedef unsigned int ui;			//0 - 2*10^9
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair

void solve(){
	int a, b, c;
	cin >> a >> b >> c;
	if (a > 50)
	{
		cout << "A\n";
	}
	else if (b > 50)
	{
		cout << "B\n";
	}
	else if (c > 50)
	{
		cout << "C\n";
	}
	else
	{
		cout << "NOTA\n";
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
