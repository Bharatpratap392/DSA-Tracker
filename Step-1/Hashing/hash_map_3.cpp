#include <bits/stdc++.h>
using namespace std;
// counting through ordered  map
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    for (auto it : mpp)
    {
        cout << it.first << "->" << it.second << endl;
    }
    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;
        cout << mpp[number] << endl;
    }
    return 0;
}
/*
input
7
1 2 3 1 3 2 12
5
1
2
3
4
12
*/