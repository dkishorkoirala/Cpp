/*Getting Numbers


Challenge

Now that we have a welcome message, it's time to get the numbers for our calculations. In C++, we use the std::cin object to get input from the user. For our calculator, we need two numbers to perform operations like addition, subtraction, multiplication, and division.

Modify the given code to get two double numbers from the user and store them in variables named num1 and num2. Use std::cin to read the numbers. After getting the numbers, print them to the console using std::cout with the following format:

First number: [first number]
Second number: [second number]
*/
#include <iostream>
using namespace std;
int main()
{
    cout << "Calculator App" << endl;
    double num1, num2;

    cin >> num1 >> num2;
    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;

    return 0;
}