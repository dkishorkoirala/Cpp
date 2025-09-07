/*Real Numbers


In C++, real numbers are typically represented using two main data types: float and double.

float is used to store numbers with a decimal point. For example:

float price = 99.99f;
The 'f' (or 'F') at the end of a decimal number is called a literal suffix, and it explicitly tells the compiler that this number should be treated as a float.

double is used to store numbers with a decimal point, but with double precision. float typically has 7 decimal digits of precision whereas double typically has 15-17 decimal digits of precision. For example:

float f = 3.14159265359;
double d = 3.14159265359;

cout << f << endl; // Might print: 3.14159
cout << d << endl; // Might print: 3.14159265359

Challenge

Write a C++ program that declares and initializes the following variables:

Declare a float variable named itemPrice and initialize it with the value 24.99f.
Declare a double variable named temperature and initialize it with the value 23.5.
*/

#include <iostream>

int main()
{
    float itemPrice = 24.99f;
    double temperature = 23.5;

    std::cout << "Price: " << itemPrice << std::endl;
    std::cout << "Temperature: " << temperature << std::endl;
    return 0;
}