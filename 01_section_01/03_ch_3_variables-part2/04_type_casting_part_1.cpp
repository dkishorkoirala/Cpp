/*Type Casting Part 1


Type casting is the process of converting a value from one data type to another.

In C++, we can convert integers to doubles, doubles to integers, and more. There are two types of casting: implicit (automatic) and explicit (manual) casting.

For example Integer to Double:

Implicit (automatic) casting:

int number = 5;
double decimal = number; // automatically becomes 5.0

// with calculation
int x = 7;
double result = x / 2.0; // result is 3.5
Explicit (manual) Casting Double to Integer:

double decimal = 9.7;
int number = (int) decimal;  // becomes 9 (decimal part is truncated)

// with calculation
double price = 19.99;
int roundedPrice = (int) price;  // becomes 19

Challenge

Write a C++ program that demonstrates type casting. Perform the following operations:

Declare a double variable named price and initialize it with the value 99.99.
Cast the price variable to an int and store the result in a new variable named intPrice.
Print the values of price and intPrice, to the console.
*/

#include <iostream>
using namespace std;

int main()
{
    double price = 99.99;
    int intPrice = (int)price;
    cout << "Price: " << price << endl;
    cout << "Int Price: " << intPrice << endl;
    return 0;
}
