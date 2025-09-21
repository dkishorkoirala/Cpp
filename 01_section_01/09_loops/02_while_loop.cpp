/*While Loop


A while loop is different from the for loop. A for loop allows us to iterate over a specific range, whereas a while loop allows us to keep iterating as long as a certain condition is met.

To use a while loop write:

while (condition) {
    code
}
The code will execute only if the condition is true.

There are many use cases where a while would solve the problem, but the for loop would not.

Challenge

Write a program that gets one input, double number.

Use a while loop to divide the input by 2 as long as the number is bigger or equal to 3.5.

Print the first number that is smaller than 3.5.
*/
#include <iostream>
using namespace std;

int main()
{
    double num;
    cin >> num;

    while (num >= 3.5)
    {
        num /= 2;
    }
    cout << num << endl;
    return 0;
}