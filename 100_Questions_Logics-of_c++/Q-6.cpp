//Write a Program to Print Check Whether a Character is an Alphabet or Not
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    cin>>ch;
    if (isalpha(ch)) {
        cout << ch << " is an alphabet." << endl;
    }
    else {
        cout << ch << " is not an alphabet." << endl;
    }
    return 0;
}