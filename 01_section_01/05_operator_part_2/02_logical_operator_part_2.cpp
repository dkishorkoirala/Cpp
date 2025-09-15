/*Logical Operators Part 2


Logical operators have a special table called "Truth table" that shows what the combination of logical operators returns.

Truth table for the and (&&) operator:

a	b	a && b
false	false	false
false	true	false
true	false	false
true	true	true
The only way to get a true for the and (&&) operator is if both a and b are true

Truth table for the or (||) operator:

a	b	a || b
false	false	false
false	true	true
true	false	true
true	true	true
In this case, to get a true result, either a or b should be true.

Truth table for the not (!) operator:

a	!a
false	true
true	false
Here the value of a is reversed. If a is false then !a is true


Challenge

You need to assign integer values to variables b1 and b2 so that b3 evaluates to true in the expression: bool b3 = !((b1 + b2) > (b1 * b2)).

Take a moment to analyze the condition and think about what values would make it true.
*/
#include <iostream>
using namespace std;

int main()
{
    // Type your code below
    int b1 = 0;
    int b2 = 0;
    bool b3 = !((b1 + b2) > (b1 * b2));

    // Don't change the line below
    cout << "b3 = " << b3 << endl;

    return 0;
}