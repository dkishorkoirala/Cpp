/*Basic Program Structure


In C++, every line of code that runs must be inside the main function. The main function is the entry point of a C++ program. When you run a C++ program, the code inside the main function is the first to be executed.

Here's a simple breakdown of a basic C++ program:

#include <iostream> // Header for input/output

int main() { // Main function
    std::cout << "This is my first C++ program!"; // Output statement
    return 0; // Return statement
}
In C++, the #include directive is used to include header files, which contain declarations of functions and objects that your program can use. In this case, #include <iostream> includes the iostream header, which provides objects like std::cout for outputting text to the console.

Important note: In C++, each statement must end with a semicolon (;). The semicolon is mandatory and tells C++ that you've reached the end of a statement. Forgetting to add a semicolon will result in a compilation error. However, note that code blocks enclosed in curly braces {} (like function declarations) don't need semicolons.

Challenge

Create a C++ program with a main function. Inside the main function, write code to output the following text:

This is my first C++ program!
*/

#include <iostream>

int main()
{
    std::cout << "This is my first C++ program!";
    return 0;
}