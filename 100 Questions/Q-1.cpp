// Write a C++ Program to Check Whether a Number is a Positive or Negative Number
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n > 0)
    {
        cout << n <<" "<< "it's a positive number";
    }
    else if (n == 0)
    {
        cout << n << " "<<"it's a zero";
    }
    else
    {
        cout << n << " "<<"it's negtive number";
    }
    return 0;
}