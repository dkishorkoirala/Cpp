/*cin Statement


As of now we stored values that we thought about in variables. Programs usually don't work this way. We receive values from an outer source, a user for example.

In C++, getting input from a user is done using the cin statement. This statement provides methods to read different types of input, such as integers, floating-point numbers, and strings.

To use the cin statement, you first need to declare a variable to store the input value. Then, you can use the extraction operator >> to read the input from the standard input stream std::cin and store it in the variable. Here's how you do it:

int age;
std::cout << "Enter your age: ";
std::cin >> age;
The extraction operator >> will automatically convert the input to the appropriate data type based on the variable you're storing it in. For example:

// For integers:
std::cin >> intVariable;

// For doubles:
std::cin >> doubleVariable;

// For strings:
std::cin >> stringVariable;
For boolean values in C++, cin can handle input in two ways:

1. Using numbers (0 is converted to false, non-zero value is converted to true)

2. Using strings ("true" or "false" are converted to true or false respectively)

Challenge

Write a program that gets input from the user (their name), and then outputs Hello, followed by the user's inputted name.

For example, if the user inputs Bob, the expected output is Hello, Bob.

You will need to:

Create an string variable to store the name.
Prompt the user to enter their name.
Read the user's name using the appropriate cin method.
Print Hello, and the stored variable in the end.
*/

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    cout << "Enter your name: ";
    string name;
    cin >> name;
    cout << "Hello, " << name << endl;
    return 0;
}