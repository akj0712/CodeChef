#include<bits/stdc++.h>

using namespace std;

int main () {
	int t;
	cin >> t;

	while(t--)
	{
		int drag[3], dsum = 0;
		int slot[3], ssum = 0;
		for (int i = 0; i < 3; ++i)
		{
			cin >> drag[i];
			dsum = dsum + drag[i];
		}
		for (int i = 0; i < 3; ++i)
		{
			cin >> slot[i];
			ssum = ssum + slot[i];
		}
		// cout << dsum << " " << ssum ;
		if (dsum > ssum)
		{
			cout << "DRAGON" << "\n";
		}
		else if(ssum > dsum)
		{
			cout << "SLOTH" << "\n";
		}
		else if (ssum == dsum)
		{
			if (drag[0] > slot[0])
			{
				cout << "DRAGON" << "\n";
			}
			else if (slot[0] > drag[0])
			{
				cout << "SLOTH" << "\n";
			}
			else if (drag[0] == slot[0])
			{
				if (drag[1] > slot[1])
				{
					cout << "DRAGON" << "\n";
				}
				else if (slot[1] > drag[1])
				{
					cout << "SLOTH" << "\n";
				}
				else
				{
					cout << "TIE" << "\n";
				}
			}
			
		}
	}
	return 0;
}