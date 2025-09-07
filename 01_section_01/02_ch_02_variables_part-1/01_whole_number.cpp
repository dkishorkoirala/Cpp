/*Whole Numbers


Variables are containers that hold data values. They are used to store, manipulate, and display information within a program.

In short, a variable is like a memory unit that we can access by typing the name of the variable.

Each variable has a unique name and a value that can be of different types. C++ has various built-in data types that define the type of value a variable can hold.

To initialize a variable, we use the following format:

variable_type variable_name = value;
In C++, whole numbers are typically represented using the int data type.

int is used to store whole numbers without any decimal point. For example:

int age = 30;
int temperature = -5;
int count = 100;
When declaring variables in C++, you need to specify the type of the variable before the variable name. This is known as type declaration. Once a variable is declared with a certain type, it can only hold values of that type.


Challenge

Declare an int variable named quantity and initialize it with the value 5.

You are given a full program skeleton, don't change the pre made code!
*/

#include <iostream>

int main()
{
    int quantity = 5;

    std::cout << "Quantity: " << quantity;
    return 0;
}