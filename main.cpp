#include "main.h"
using namespace std;

int main()
{
    string operation;
    double num1, num2, result;

    cin >> operation;
    cin >> num1;
    cin >> num2;

    if (operation == "+")
    {
        result = num1 + num2;
    }
    else if (operation == "-")
    {
        result = num1 - num2;
    }
    else if (operation == "/")
    {
        result = num1 / num2;
    }
    else if (operation == "*")
    {
        result = num1 * num2;
    }
    else
    {
        cout << "ERORR: Operand not found";
    }

    cout << "Result is: " << result << "\n";
    cout << "Press enter to exit.";
    cin >> result;
}