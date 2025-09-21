/*For Loop Part 1


Sometimes when programming, it's necessary to perform the same or almost the same operation a couple of times.

To prevent writing the same thing over and over again, we can use Loops.

The for loop has the following syntax:

for (initialization; condition; update) {
    code
}
The initialization, condition and update determine what is the start value and what is the end value.

For example, loop from 0 to 5 (not including):

for (int i = 0; i < 5; i++) {
    std::cout << i << std::endl;
}
It will execute the print statement 5 times:

0
1
2
3
4
In this loop the starting value is 0 (like int i = 0), the condition checks if the loop should continue (like i < 5), and the update changes the value after each iteration (like i++).

Loops have many use cases. For example, let's sum all the numbers from 1 to 100:

int sum_numbers = 0;
for (int i = 1; i <= 100; i++) {
    sum_numbers += i;
}
std::cout << sum_numbers;
This will first loop through all numbers between 1 and 100 (including 100 because of <= sign) and sum all of them, then it will print the sum_numbers variable

Challenge

Write a program that prints "Hello Coddy: " and the i value from 3 to 27 (including, which means printing the numbers 3, 4, 5, ..., 26, 27, making it 27 - 3 + 1 = 25 times in total), do it using a for loop.

It will look like this:

Hello Coddy: 3
Hello Coddy: 4
...
Hello Coddy: 27*/

#include <iostream>
using namespace std;

int main()
{
    for (int i = 3; i <= 27; i++)
    {
        cout << "Hello Coddy: " << i << endl;
    }
    return 0;
}