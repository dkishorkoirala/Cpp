/*Formatted Output


Challenge

Modify the output so that it will always print a double value with two decimal places. To do it use the << operator with std::fixed and std::setprecision(2):

#include <iomanip>

std::cout << std::fixed << std::setprecision(2) << num;
You'll need to include <iomanip>*/

#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    cout << "Calculator App" << endl;
    double num1, num2;

    cin >> num1 >> num2;

    double sum = num1 + num2;
    double difference = num1 - num2;
    double product = num1 * num2;
    double division = num1 / num2;

    cout << "Sum: " << fixed << setprecision(2) << sum << endl;
    cout << "Difference: " << fixed << setprecision(2) << difference << endl;
    cout << "Product: " << fixed << setprecision(2) << product << endl;
    cout << "Division: " << fixed << setprecision(2) << division << endl;
    return 0;
}