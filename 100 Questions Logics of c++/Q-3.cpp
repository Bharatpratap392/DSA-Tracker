// C++ Program To Check Whether Number is Even Or Odd
#include <bits/stdc++.h>
using namespace std;
bool isEven(int n){
    return n % 2 == 0;
}
int main()
{
    int n;
    cin >> n;
    if (isEven(n))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}