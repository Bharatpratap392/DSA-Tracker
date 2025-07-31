#include <bits/stdc++.h>
using namespace std;

// FOR LOOP & WHILE LOOP DEMO
void learningFORWHILE()
{
    int i; // declared outside to use after loop if needed

    // FOR loop: countdown from 5 to 1
    for (int i = 5; i > 0; i = i - 1)
    {
        cout << "Printing-For-Loop: BHARAT IS COOL " << i << endl;
    }

    // i here refers to the one declared outside, remains unmodified
    cout << "Printing-i-After-For-Loop: " << i << endl;

    // WHILE loop: increment i by 6 until it reaches 25
    i = 1;
    while (i <= 25)
    {
        cout << "Printing-While-Loop: HEY handsome " << i << endl;
        i = i + 6;
    }
}

// DO-WHILE LOOP DEMO
void learningDOWHILE()
{
    int i = 1;

    // DO-WHILE loop: Executes at least once
    do
    {
        cout << "Printing-Do-While-Loop: HEY handsome " << i << endl;
        i = i + 1;
    } while (i <= 2);

    // i is now > 2, loop stopped
    cout << "Printing-i-After-Do-While: " << i << endl;
}

// FUNCTION CALLING WITH STRINGS
void printName(string name)
{
    // Greets the passed name
    cout << "HI " << name << endl;
}

void learningFUNCTIONS()
{
    string name;
    cin >> name;     // user input
    printName(name); // function call

    string name2;
    cin >> name2; // another input
    printName(name2);
}

// BASIC ARITHMETIC OPERATIONS
void learningARITHMETIC()
{
    int x, y;
    cout << "Enter value of x and y: ";
    cin >> x >> y;

    // Add
    int sum = x + y;
    cout << "Sum of x and y is: " << sum << endl;

    // Subtract
    int diff = x - y;
    cout << "Difference of x and y is: " << diff << endl;

    // Multiply
    int product = x * y;
    cout << "Product of x and y is: " << product << endl;

    // Divide with safety check
    if (y != 0)
    {
        float division = (float)x / y;
        cout << "Division of x by y is: " << division << endl;
    }
    else
    {
        cout << "Division by zero is not allowed!" << endl;
    }
}

// MAXIMUM OF TWO VALUES
int maxx(int x, int y)
{
    // return the greater value
    return (x > y) ? x : y;
}

void learningMINMAX()
{
    int x, y;
    cout << "Enter value of x and y: ";
    cin >> x >> y;

    int maximum = maxx(x, y);
    cout << "Maximum is: " << maximum << endl;
}

// PASS BY VALUE (copy of variable)
void doSomethingByValue(int x)
{
    cout << "Inside-Function Original x: " << x << endl;
    x += 5;
    cout << "After +5: " << x << endl;
    x -= 1;
    cout << "After -1: " << x << endl;
}

void learningPASSBYVALUE()
{
    int x = 20;
    doSomethingByValue(x);
    cout << "Outside-Function x (unchanged): " << x << endl;
}

// PASS BY REFERENCE (original variable modified)
void doSomethingByReference(string &s)
{
    // change first char to 'b'
    s[0] = 'b';
    cout << "Inside-Function: " << s << endl;
}

void learningPASSBYREFERENCE()
{
    string s = "sharat";
    doSomethingByReference(s);
    cout << "Outside-Function (modified): " << s << endl;
}

// ARRAY INPUT & OUTPUT
void learningARRAYLOOP()
{
    int arr[5]; // array of 5 integers
    // Input
    cout << "Enter 5 integers:" << endl;
    for (int i = 0; i <= 4; i++)
    {
        cin >> arr[i];
    }

    // Output
    cout << "Printing-Array-Elements:" << endl;
    for (int i = 0; i <= 4; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    learningFORWHILE();        // For and While loops
    learningDOWHILE();         // Do-While loop
    learningFUNCTIONS();       // Function with parameters
    learningARITHMETIC();      // Basic arithmetic
    learningMINMAX();          // Maximum between two numbers
    learningPASSBYVALUE();     // Pass-by-value demo
    learningPASSBYREFERENCE(); // Pass-by-reference demo
    learningARRAYLOOP();       // Arrays and loops

    return 0;
}