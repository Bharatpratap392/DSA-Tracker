// for sum of 1 to n divisors
#include <bits/stdc++.h>
using namespace std;
void sumofalldivisors(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i * (n / i);
    }
    cout << "Sum of all divisors from 1 to " << n << ": " << sum << endl;
}
// print all divisors
void printalldivisors(int n)
{
    cout << "print all the divisiors from 1 to n " << n << " " << "are:";
    vector<int> ls;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            ls.push_back(i);
            if ((n / i) != i)
            {
                ls.push_back(n / i);
            }
        }
    }
    sort(ls.begin(), ls.end());
    for (auto it : ls)
        cout << it << " ";
}

int main()
{
    int n;
    cin >> n;
    sumofalldivisors(n);
    printalldivisors(n);
}