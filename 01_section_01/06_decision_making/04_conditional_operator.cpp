/*Conditional Operator


The conditional operator is a simple one-line if-else statement. It has the following syntax:

variable = (condition) ? value_if_true : value_if_false;
The conditional operator evaluates the condition. If it's true, it assigns value_if_true to the variable; otherwise, it assigns value_if_false.

For example:

int age = 20;
std::string message = (age >= 18) ? "Adult" : "Minor";
In this example, since age is greater than or equal to 18, message will be assigned the value "Adult". If age were less than 18, message would be assigned "Minor".

You can stack as many conditions as you like:

vrbl = (cond1) ? val1 : (cond2) ? val2 : val3;

Challenge

Create a program that checks if a number is positive, negative, or zero using the conditional operator. The program should:

Take an integer input from the user.
Use the conditional operator to determine if the number is positive, negative, or zero.
Print the result in the format: "The number is [positive/negative/zero]".
*/

#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;

    string result = (number > 0) ? "positive" : (number < 0) ? "negative"
                                                             : "zero";

    cout << "The number is " << result << endl;
    return 0;
}