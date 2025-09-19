/*Recap - Till 120


Challenge

Write a program that gets the user's age as input.

The program will output (print) the number of missing years till 120 (in a specific format, shown below).

For example, for input 25, the expected output is "95 years till 120".

Make sure to not print anything else!*/
#include <iostream>

int main()
{
    int age;
    std::cin >> age;
    int missingYears = 120 - age;
    std::cout << missingYears << " years till 120" << std::endl;
    return 0;
}