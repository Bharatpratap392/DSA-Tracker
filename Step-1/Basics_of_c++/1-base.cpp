#include <bits/stdc++.h>
using namespace std;

// 1. DATA TYPES AND VARIABLES
void dataTypesAndVariables()
{
    int age = 21;              // Integer
    float pi = 3.14f;          // Floating point
    double largePi = 3.141592; // Double precision
    char grade = 'A';          // Character
    bool isPassed = true;      // Boolean
    string name = "Bharat";    // String (requires #include <string>)
/*
| Type     | Size (approx) | Example       |
| -------- | ------------- | ------------- |
| `int`    | 4 bytes       | 1, 100, -9    |
| `float`  | 4 bytes       | 3.14f, -0.5f  |
| `double` | 8 bytes       | 2.71828, -3.0 |
| `char`   | 1 byte        | 'A', 'z'      |
| `bool`   | 1 byte        | true / false  |
| `string` | varies        | "hello"       |
*/
    cout << "Age: " << age << ", Pi: " << pi << ", Grade: " << grade << ", Passed: " << isPassed << ", Name: " << name << endl;
}

// 2. OPERATORS IN C++

void operatorExamples()
{
    int a = 10, b = 3;
    // Arithmetic Operators
    cout << "Sum: " << a + b << endl;
    cout << "Difference: " << a - b << endl;
    cout << "Product: " << a * b << endl;
    cout << "Quotient: " << a / b << endl;
    cout << "Remainder: " << a % b << endl;
    // Assignment Operators
    a += 5; // a = a + 5
    cout << "Updated a: " << a << endl;
    // Comparison Operators
    cout << "a == b: " << (a == b) << endl;
    cout << "a > b: " << (a > b) << endl;
    // Logical Operators
    bool x = true, y = false;
    cout << "x && y: " << (x && y) << endl;
    cout << "x || y: " << (x || y) << endl;
    cout << "!x: " << (!x) << endl;
    // Bitwise Operators
    cout << "a & b: " << (a & b) << endl;
    cout << "a | b: " << (a | b) << endl;
}

// 3. TYPE CONVERSION

void typeConversion()
{
    float pi = 3.14;
    int x = (int)pi; // Explicit conversion (casting)
    cout << "pi as int: " << x << endl;
}

// 4. CONTROL FLOW STATEMENTS

void ifElseExample()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age >= 18)
        cout << "You are an adult." << endl;
    else
        cout << "You are a minor." << endl;
}

void switchExample()
{
    int day;
    cout << "Enter Day Number (1-7): ";
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    default:
        cout << "Invalid Day";
    }
    cout << endl;
}

//  5. LOOPS (WHILE, FOR, DO)

void loopExamples()
{
    cout << "--- FOR LOOP ---" << endl;
    for (int i = 1; i <= 5; i++)
        cout << i << " ";
    cout << endl;

    cout << "--- WHILE LOOP ---" << endl;
    int i = 1;
    while (i <= 5)
    {
        cout << i << " ";
        i++;
    }
    cout << endl; 

    cout << "--- DO WHILE LOOP ---" << endl;
    i = 1;
    do
    {
        cout << i << " ";
        i++;
    } while (i <= 5);
    cout << endl;
}

// 6. FUNCTIONS (PASS VALUE)

void printName(string name)
{
    cout << "Hi, " << name << "!" << endl;
}

void passByValue(int x)
{
    cout << "Initial x: " << x << endl;
    x += 5;
    cout << "Modified x: " << x << endl;
}

//  7. PASS BY REFERENCE

void passByReference(string &s)
{
    s[0] = 'B';
    cout << "Inside function: " << s << endl;
}

//  8. ARRAYS (FIXED SIZE DATA)

void arrayExample()
{
    int arr[5];
    cout << "Enter 5 integers:" << endl;
    for (int i = 0; i < 5; i++)
        cin >> arr[i];
    cout << "Array contents: ";
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";
    cout << endl;
}

//  9. MAXIMUM FUNCTION

int maxx(int a, int b)
{
    return (a > b) ? a : b;
}

void maxMinExample()
{
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    cout << "Maximum is: " << maxx(x, y) << endl;
}

//  MAIN FUNCTION

int main()
{
    cout << "\n Data Types and Variables\n";
    dataTypesAndVariables();

    cout << "\n Operators\n";
    operatorExamples();

    cout << "\n Type Conversion\n";
    typeConversion();

    cout << "\n If-Else Condition\n";
    ifElseExample();

    cout << "\n Switch Case\n";
    switchExample();

    cout << "\n Loops (For, While, Do-While)\n";
    loopExamples();

    cout << "\n Function Call (Pass by Value)\n";
    int val = 10;
    passByValue(val);
    cout << "Outside function x: " << val << endl;

    cout << "\n Function Call (Pass by Reference)\n";
    string s = "sharat";
    passByReference(s);
    cout << "Outside function: " << s << endl;

    cout << "\n Arrays\n";
    arrayExample();

    cout << "\n Maximum of Two Numbers\n";
    maxMinExample();

    return 0;
}