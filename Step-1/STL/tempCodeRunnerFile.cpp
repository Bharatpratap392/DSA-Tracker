#include <bits/stdc++.h>
using namespace std;

void learningPAIR()
{
    pair<int, int> p1 = {1, 2};                                                        // for only insterting 2 values
    cout << "Printing-Pair p1 =" << " " << p1.second << " " << p1.first << endl;       // here p.second access the value "2" and p.first acccess "1"
    pair<int, pair<int, int>> q2 = {4, {5, 8}};                                        // now for insterting 3,4,5.... values we can use nested pair here one pair can store 2 pair
    cout << "Printing-Pair q2 =" << " " << q2.first << " " << q2.second.first << endl; // here we access pair 1 value which is "4" and then we can access pair 2 value which we can access any 5 or 8
    pair<int, int> arr1[] = {{1, 5}, {5, 3}, {8, 9}, {8, 4}, {7, 3}};                  // when we have more pair that's how we can store it
    cout << "Printing-Pair arr1 =" << " " << arr1[1].first << endl;                    // and that's how we access the value
}