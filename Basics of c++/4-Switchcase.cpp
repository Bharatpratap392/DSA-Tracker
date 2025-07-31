#include <bits/stdc++.h>
using namespace std;

// learningSWITCHCASE: Print day name using switch statement
void learningSWITCHCASE()
{
    int day;
    cout << "Enter Day Number: " << endl;
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "monday";
        break;
    case 2:
        cout << "tuesday";
        break;
    case 3:
        cout << "wednesday";
        break;
    case 4:
        cout << "thursday";
        break;
    case 5:
        cout << "friday";
        break;
    case 6:
        cout << "saturday";
        break;
    case 7:
        cout << "sunday";
        break;
    default:
        cout << "invalid";
    }

    cout << " check ";
}

// main function to run the switch-case program
int main()
{
    learningSWITCHCASE();
    return 0;
}
