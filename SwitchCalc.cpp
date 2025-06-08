#include <iostream>
#include <cfloat>
#include <cmath>

using namespace std;

int main()
{
    // define variables
    char operation;
    double number1, number2, res;

    // Get Variables
    cout << "Enter First Number: ";
    cin >> number1;
    cout << "Enter Operation (+, -, *, /): ";
    cin >> operation;
    cout << "Enter Second Number: ";
    cin >> number2;

    // Do the math
    switch (operation)
    {
    case '+':
        res = number1 + number2;
        break;
    case '-':
        res = number1 - number2;
        break;
    case '*':
        res = number1 * number2;
        break;
    case '/':
        res = number1 / number2;
        break;
    default:
        cout << "Error! Operator is not recognized";
        res = -DBL_MAX;
    }

    if (res != -DBL_MAX)
    {
        cout << "Result: " << res << endl;
    }
    return 0;
}