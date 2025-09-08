/*Boolean


A boolean type has only 2 possible values: true or false.

To assign a boolean value to a variable, use the keyword bool followed by the variable name:

bool variable_true = true;
bool variable_false = false;
In the above example, two boolean variables named variable_true and variable_false are initialized with the values true and false, respectively. When printing a boolean value using cout, true displays as 1 and false displays as 0.

Booleans are the building blocks for creating logic in the programs we write. We have a whole chapter about logic and conditions.

Challenge

Declare a variable named isLoggedIn and assign it the value true.
*/

#include <iostream>
int main()
{
    bool isLoggedIn = true;

    std::cout << "isLoggedIn = " << isLoggedIn;
    return 0;
}