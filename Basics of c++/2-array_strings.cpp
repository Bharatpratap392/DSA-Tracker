#include <bits/stdc++.h>
using namespace std;

void learningARRAY()
{
    int arr[6];                                                      // creating an array of size 6, index from 0 to 5 put 6 random values
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4] >> arr[5]; // taking input one by one in each index
    arr[5] -= 10;                                                    // we can also manipulate array value like subtracting 10 from the last element
    cout << "Printing-Array" << " " << arr[5] << endl;               // just printing the last element
}

void learningSTRING()
{
    string s = "BHARAT";                           // initialized a string named 's'
    int len = s.size();                            // s.size() gives the total length of string which is 6
    s[len - 1] = 'z';                              // changing the last character of the string to 'z' → s becomes "BHARAz"
    cout << "Printing-String" << " " << s << endl; // print modified string
}

int main()
{
    learningARRAY();
    learningSTRING();
}
