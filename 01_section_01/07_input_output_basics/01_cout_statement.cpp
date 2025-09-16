/*In C++, the cout object provides various methods for printing output to the console. Here are some of the most commonly used cout methods:

<<: Prints a string to the console. It does not add a newline character at the end, so subsequent output will continue on the same line.
endl or \n: Used to add a line break in the output. Without these, all output will appear on the same line.
Here's how you can use these methods:

std::string name = "Alice";
int age = 30;
Using endl:

cout << "Name: ";
cout << name;
cout << " is " << age << " years old." << endl;
cout << "Hello, " << name << "!" << endl;
// Output:
// Name: Alice is 30 years old.
// Hello, Alice!
Using \n:

cout << "Name: " << name << "\n";
cout << "Age: " << age << "\n";
cout << "Hello, " << name << "!\n";
// Output:
// Name: Alice
// Age: 30
// Hello, Alice!

Challenge

Write a C++ program that uses cout methods to output the following:

Print "Hello, " and "Coddy!" on the same line.
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "Hello, ";
    cout << "Coddy!" << endl;
    return 0;
}