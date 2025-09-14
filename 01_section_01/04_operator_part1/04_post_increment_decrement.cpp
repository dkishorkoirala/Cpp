/*Post Increment/Decrement


In the previous lesson, we covered the increment (++) and decrement (--) operators. These operators have two forms: prefix and postfix.

The prefix form is written before the variable (e.g., ++x or --x), and the postfix form is written after the variable (e.g., x++ or x--).

The difference between the two forms is subtle but important:

Prefix form: Increments/decrements the variable and then returns the new value.
Postfix form: Returns the current value of the variable and then increments/decrements it.
Here's an example to illustrate the difference:

int x = 5;
int y = x++;
// y = 5, x = 6 (postfix)

int a = 5;
int b = ++a;
// b = 6, a = 6 (prefix)
In the first case, y is assigned the original value of x (5), and then x is incremented to 6. In the second case, a is incremented first, and then its new value (6) is assigned to b.

The same logic applies to the decrement operator:

int x = 5;
int y = x--;
// y = 5, x = 4 (postfix)

int a = 5;
int b = --a;
// b = 4, a = 4 (prefix)

Challenge

You are given a code with initializations of x, y, and z. (Don't delete these lines!)

Your task is to use the increment/decrement operators to perform the following operations, in this order:

Use the postfix increment operator to assign the current value of x to a and then increment x.
Use the prefix decrement operator to decrement y and assign its new value to b.
Use the postfix decrement operator to assign the current value of z to c and then decrement z.
After performing these operations, print the values of a, b, c, x, y, and z to the console in the following format:

a: [value of a]
b: [value of b]
c: [value of c]
x: [value of x]
y: [value of y]
z: [value of z]
*/

#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    int y = 20;
    int z = 30;

    int a, b, c;

    // Type your code below
    a = x++;
    b = --y;
    c = z--;

    // Don't change the lines below
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;
    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
    std::cout << "z: " << z << std::endl;

    return 0;
}