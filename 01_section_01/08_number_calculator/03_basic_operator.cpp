/*Basic Operations
Challenge

Add the basic arithmetic operations (addition, subtraction, multiplication, and division) on num1 and num2. Store the results in variables named sum, difference, product, and division, respectively. Print the results to the console using std::cout in the following format:

Sum: [sum]
Difference: [difference]
Product: [product]
Division: [division]*/

#include <iostream>
using namespace std;

int main()
{
    cout << "Calculator App" << endl;
    double num1, num2;

    cin >> num1 >> num2;

    cout << "Sum: " << double(num1 + num2) << endl;
    cout << "Difference: " << double(num1 - num2) << endl;
    cout << "Product: " << double(num1 * num2) << endl;
    cout << "Division: " << double(num1 / num2) << endl;
    return 0;
}