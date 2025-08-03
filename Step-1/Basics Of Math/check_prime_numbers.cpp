#include <bits/stdc++.h>
using namespace std;
void printprimenumbers(int n)
{
    int count = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;          // Count i as a divisor
            if ((n % i) != i) // Avoid double-counting perfect square root
                count++;      // Count the corresponding pair (n/i)
        }
    }
    if (count == 2)
    {
        cout << "it's a prime number";
    }
    else
        cout << "it's not";
}

int main()
{
    int n;
    cin >> n;
    printprimenumbers(n);
}
