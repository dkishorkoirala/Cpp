/*Logical Operators Part 3


When checking multiple conditions, the computer stops checking as soon as it knows the final answer (This is called short-circuit evaluation).

For example:

int x = 0;
int y = 5;
bool result = x != 0 && y / x > 2;
Here x equals 0, therefore it will not evaluate y / x > 2. If we were to reverse the order:

bool result = y / x > 2 && x != 0;
This will result in an error because y will be divided by 0 which is illegal in math.

This technique is used to optimize the evaluation of logical expressions. For example:

int a = 0;
int b = 2;
int c = 3;
int d = 5;
bool result = (a > 0 && b < 2) || (c < -5 && d < 10);
In this example, b < 2 and d < 10 will not be evaluated because a > 0 and c < -5 are both false.


Challenge

Create a program to decide if it's a good day for solar panel energy production

Initialize these variables:

isSunny with the value true
windSpeed with the value 5.4
temperature with the value 23
solarPanelOutput with the value 9
isCloudy with the value false
Create one logical expression that checks ALL of these conditions:

It's sunny
The wind speed is less than 10
The solar panel output is less than 15
The temperature is above 20 OR there are no clouds
*/
#include <iostream>
using namespace std;

int main()
{
    bool isSunny = true;
    double windSpeed = 5.4;
    int temperature = 23;
    int solarPanelOutput = 9;
    bool isCloudy = false;

    bool result = isSunny && (windSpeed < 10) && (solarPanelOutput < 15) && (temperature > 20 || !isCloudy);

    // Print results
    std::cout << "1. Is it sunny? " << std::boolalpha << isSunny << std::endl;
    std::cout << "2. Is wind speed safe? " << (windSpeed < 10) << std::endl;
    std::cout << "3. Do panels produce less? " << (solarPanelOutput < 15) << std::endl;
    std::cout << "4. Is temperature good OR no clouds? " << (temperature > 20 || !isCloudy) << std::endl;
    std::cout << "5. Final result: " << result << std::endl;

    return 0;
}