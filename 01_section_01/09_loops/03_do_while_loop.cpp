/*Do While Loop


The do-while loop is similar to the while loop, but with one key difference: the code block is executed at least once before the condition is checked. This means that the loop's body will always run the first time, regardless of whether the condition is true or false.

Here's the basic structure of a do-while loop:

do {
    // Code to be executed
} while (condition);
The do keyword marks the beginning of the loop, followed by the code block in curly braces. After the code block, the while keyword introduces the condition. The loop will continue to execute as long as the condition is true.

Here's an example:

int count = 0;
do {
    std::cout << "Count: " << count << std::endl;
    count++;
} while (count < 5);
In this example, the code inside the do block will execute first, printing "Count: 0" and incrementing count to 1. Then, the condition count < 5 is checked. Since it's true, the loop continues. This process repeats until count becomes 5, at which point the condition becomes false and the loop terminates.

The output of this code will be:

Count: 0
Count: 1
Count: 2
Count: 3
Count: 4

Challenge

Write a C++ program that uses a do-while loop to do the following:

Initialize a variable sum to 0.
Initialize a variable number to 1.
In each iteration, add number to sum.
Increment number by 2 in each iteration (i.e., 1, 3, 5, ...).
print number and sum:
Sum is: [The sum value]
Num is: [The number value]
Continue the loop as long as number is less than or equal to 50.
Print the final value of sum after the loop finishes: Final Sum: [The final sum value]
*/

#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int number = 1;

    do
    {
        sum += number;
        number += 2;
        cout << "Sum is: " << sum << endl;
        cout << "Num is: " << number << endl;
    } while (number <= 50);

    cout << "Final Sum: " << sum << endl;
    return 0;
}