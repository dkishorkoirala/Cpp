/*Challenge

Write a C++ program that uses cout to print the following output:

Print "C++ is fun!" on the first line.
Print "Let's explore its features:" on the next line.
Print "1. Variables" and "2. Loops" on the same line, separated by a tab (\t).
Print "3. Functions" and "4. Classes" on the next line, separated by a tab (\t).
Print "Happy coding!" on a new line.
*/

#include <iostream>
using namespace std;
int main()
{
    cout << "C++ is fun!" << endl;
    cout << "Let's explore its features:" << endl;
    cout << "1. Variables" << "\t" << "2. Loops" << endl;
    cout << "3. Functions" << "\t" << "4. Classes" << endl;
    cout << "Happy coding!" << endl;
    return 0;
}