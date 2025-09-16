/*Nested If - Else


We can nest if-elif-else statements within each other. This allows us to create hierarchical decision-making structures.

For example:

if (age > 18) {
    if (hasLicense) {
        std::cout << "You can drive";
    } else {
        std::cout << "Get a license first";
    }
} else {
    std::cout << "Too young to drive";
}
It can be infinitely nested:

if (condition1) {
    if (condition2) {
        if (condition3) {
            // if condition1, condition2 and condition3 are true
        }
    }
}

Challenge

Create a program that checks if someone can ride a rollercoaster. The requirements are:

Must be at least 12 years old
Must be taller than 150cm
If they meet both requirements but are under 15, they need adult supervision
Print exactly these messages for each case:

If too young: Sorry, you are too young
If not tall enough: Sorry, you are not tall enough
If under 15 and no adult: Sorry, you need an adult with you
If under 15 with adult: You can ride with adult supervision!
If 15 or older and tall enough: You can ride by yourself!
*/

#include <iostream>
using namespace std;

int main()
{
    int age, height;
    bool hasAdult;
    cin >> age >> height >> hasAdult;

    if (age < 12)
    {
        cout << "Sorry, you are too young" << endl;
    }

    else if (height < 150)
    {
        cout << "Sorry, you are not tall enough" << endl;
    }

    else if (age < 15 && !hasAdult)
    {
        cout << "Sorry, you need an adult with you" << endl;
    }

    else if (age < 15 && hasAdult)
    {
        cout << "You can ride with adult supervision!" << endl;
    }

    else
    {
        cout << "You can ride by yourself!" << endl;
    }
    return 0;
}