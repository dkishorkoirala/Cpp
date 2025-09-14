/*Comparison Operators


Comparison operators are used to compare between two operands.

Sometimes we need to check whether an operand is bigger/smaller/... than another operand. The following table shows possible operators for comparison:

Operator	Meaning	Example
==	Equal	1 == 2 returns false
!=	Not Equal	1 != 2 returns true
>	Greater Than	1 > 2 returns false
<	Lower Than	1 < 2 returns true
>=	Greater or Equal	1 >= 2 returns false
<=	Lower or Equal	1 <= 2 returns true

The comparison operator returns true if the comparison is correct or false otherwise.

For example:

int var1 = 13;
int var2 = 12;
bool var3 = var1 != var2;
var3 will hold true because var1 and var2 are not equal

Remember the bool type,  var3 is a bool.


Challenge

Write a script that initializes 2 variables n1 and n2 with the values 8 and 9 (accordingly).

After that initialize another variable n3 that will hold whether n1 is bigger than n2.
*/
#include <iostream>
using namespace std;

int main()
{
    int n1 = 8, n2 = 9;
    bool n3 = n1 > n2;
    cout << "n1 = " << n1 << ", n2 = " << n2 << ", n3 = " << n3 << endl;
    return 0;
}