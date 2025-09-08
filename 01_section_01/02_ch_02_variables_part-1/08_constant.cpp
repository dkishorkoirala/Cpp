/*Constants


A constant is a special type of variable that cannot be changed once it is initialized.

To declare a constant use the keyword const followed by the variable type:

const int maxValue = 100;
In the above example, a constant named maxValue is initialized with the value 100.

If we try to change a constant value:

const int maxValue = 100;
maxValue = 200; // This will cause an error
It will result in an error because constant values cannot be changed.

Challenge

Create a constant named PI and initialize it with the value 3.14159.
*/
#include <iostream>
using namespace std;
int main()
{
    const double PI = 3.14159;
    cout << "PI = " << PI;
    return 0;
}