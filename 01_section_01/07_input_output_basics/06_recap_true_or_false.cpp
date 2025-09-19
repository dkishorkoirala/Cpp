/*Recap - True or False
Challenge

Write a program that gets an input from the user.

The program will output "T" if the input equals to “1” and "F" otherwise.
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int input;
    cin >> input;
    if (input == 1)
    {
        cout << "T";
    }
    else
    {
        cout << "F";
    }
    return 0;
}