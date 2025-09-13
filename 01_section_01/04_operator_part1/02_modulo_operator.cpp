/*Modulo Operator


The modulo operator % gives the remainder of a division. In C++, it's used with a simple syntax:

result = dividend % divisor;
dividend: The number being divided.
divisor: The number that divides the dividend.
result: The remainder of the division.
For example:

result = 10 % 3;
Here, 10 is divided by 3. 3 goes into 10 three times, with a remainder of 1. So, result will be 1.

Usually modulo is used for checking if a number is even or odd:

If a number is even, dividing it by 2 will leave a remainder of 0.
If a number is odd, dividing it by 2 will leave a remainder of 1.
When working with floating-point numbers (doubles) in C++, you cannot use the modulo operator % directly. Instead, you need to use the fmod() function from the <cmath> library. It works similarly to the modulo operator but keeps the decimal precision. For example:

#include <cmath>

double result = fmod(5.2, 2.0);
// result is 1.2
Here's how it works: 2.0 goes into 5.2 two times (4.0), and the remainder is 1.2 (5.2 - 4.0 = 1.2).

Another example:

double result = fmod(7.8, 3.5);
// result is 0.8

Challenge

Write a code that initializes three variables, a (int), b (double) and c (int) with the values 9, 2.6, and 11 (respectively).

After that, initialize the following variables:

d (int) that will hold the result of a modulo 2
e (int) that will hold the result of a modulo 3
f (double) that will hold the result of b modulo 1.5
g (double) that will hold the result of b modulo 3.9
h (int) that will hold the result of c modulo 10
Check out the result and see how different dividends and divisors affect the result.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a = 9;
    double b = 2.6;
    int c = 11;

    int d = a % 2;
    int e = a % 3;
    double f = fmod(b, 1.5);
    double g = fmod(b, 3.9);
    int h = c % 10;
    cout << "a = " << a << std::endl;
    cout << "b = " << b << std::endl;
    cout << "c = " << c << std::endl;
    cout << "d = " << d << std::endl;
    cout << "e = " << e << std::endl;
    cout << "f = " << f << std::endl;
    cout << "g = " << g << std::endl;
    cout << "h = " << h << std::endl;
    return 0;
}