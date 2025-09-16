/*Recap - If Else

Challenge

You are given a code which gets as input two numbers n1 and n2  of type double and a single char string op.

Note: we will learn in next lessons how to get input from the user, currently just don't touch the three first lines.



The possible values for op are '+', '-', '/' and '*'

Your task is to set the variable result of type double based on the conditions:

if op is '+', set result with n1 + n2.
if op is '-', set result with n1 - n2.
if op is '/', set result with n1 / n2.
if op is '*', set result with n1 * n2.
*/

#include <iostream>
using namespace std;

int main()
{
    double n1, n2;
    char op;
    cin >> n1 >> n2 >> op;

    double result = 0;

    if (op == '+')
    {
        result = n1 + n2;
    }
    else if (op == '-')
    {
        result = n1 - n2;
    }
    else if (op == '*')
    {
        result = n1 * n2;
    }
    else if (op == '/')
    {
        result = n1 / n2;
    }
    else
    {
        cout << "Invalid operator" << endl;
    }

    cout << result << endl;
    return 0;
}