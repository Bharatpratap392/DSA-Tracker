#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int dup = n; // here is just store the duplicate values of original
    int sum = 0; // This variable will store the sum of the cubes of the digits of the number.
    while (n > 0) // This loop runs until all digits are processed.
    {
        int digit = n % 10;                  
        // extract the last digit For example, if n = 153, then digit = 3.
        n /= 10;                             
        // Removes the last digit from n. If n = 153, after this line, n = 15.
        sum = sum + (digit * digit * digit); 
        // Adds the cube of the digit to the sum. So, for digit 3: sum += 3³ = 27.
        //First digit extracted = 3
        //sum = 0 + (3*3*3) = 27
        //Next digit = 5
        //sum = 27 + (5*5*5) = 27 + 125 = 152
        //Next digit = 1
        //sum = 152 + (1*1*1) = 153
    }
    if (sum == dup) // and then the stored sum value while be compared to duplicate value
    {
        cout << dup << " " << "is a armstrong" << endl;
    }
    else
        cout << dup << " " << "it's not a armstrong" << endl;
    return 0;
}
