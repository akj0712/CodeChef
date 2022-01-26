#include <bits/stdc++.h>
#define SIZE 1000000+10
using namespace std;
int arr[SIZE];

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << "\n" ;
    }
    return 0;
}