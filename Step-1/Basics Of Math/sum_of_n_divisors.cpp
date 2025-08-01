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
    cout << "print all the divisiors from 1 to n " << n << "are:";
    bool first = true;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            if (!first)
            {
                cout << ",";
            }
            cout << i;
            first = false;
        }
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    sumofalldivisors(n);
    printalldivisors(n);
}