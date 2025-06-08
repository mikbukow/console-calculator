#include <iostream>
#include <cmath>
#include <cfloat>

using namespace std;

int main()
{

    // Define Variables
    string operation;
    double number1, number2, res;

    // Get user input
    cout << "Enter Number 1: ";
    cin >> number1;
    cout << "Enter Operation (+, -, /, *): ";
    cin >> operation;
    cout << "Enter Number 2: ";
    cin >> number2;

    // Do the math
    if (operation == "+")
    {
        res = number1 + number2;
    }
    else if (operation == "-")
    {
        res = number1 - number2;
    }
    else if (operation == "*")
    {
        res = number1 * number2;
    }
    else if (operation == "/")
    {
        res = number1 / number2;
    }
    else
    {
        cout << "Error! Operation not recongnized" << endl;
        res = -DBL_MAX;
    }

    if (res != -DBL_MAX)
    {
        cout << "Result: " << res << endl;
    }
    return 0;
}