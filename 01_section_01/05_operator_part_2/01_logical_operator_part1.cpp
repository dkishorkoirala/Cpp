/*Logical Operators Part 1


Logical operators are used to check combinations of comparisons that return true or false.

For example the following statement contains two comparisons:

Is 5 greater than 3 and less than 6?

Operator	Meaning	Example
&&	And - true if all operands are true	a && b
||	Or - true if any operand is true	a || b
!	Not - true if the operand is false	!a


Let's see some examples:

5 is greater than 3 and 1 equals 1:

bool b1 = (5 > 3) && (1 == 1); // holds true
Explanation: All of the operands are true, so b1 will hold true (and operation is true if both operands are true) .



5 is not equals 4 or 5 equals 2:

bool b2 = !(5 == 4) || (5 == 2); // holds true
Explanation: The first operand (5 != 4) is true so b2 is also true (or operation is true if either one of the operands is true)



1 is not equals 1 or false:

bool b3 = !(1 == 1) || false; // holds false
Explanation: All of the operands are false, so b3 will hold false (or operation).



3 is not greater than 4:

bool b4 = !(3 > 4); // holds true
Explanation: The operand is false, so b4 will hold true (not operation).



5 is not greater than 10 or 5 is not greater than 1:

bool b5 = !(5 > 10 || 5 > 1); // holds false
Explanation: 5 > 10 || 5 > 1 is true (one of the operands is true), so in total b5 is false (not operation).

Challenge

You are given code. Replace the question marks of the variables bool b1 and bool b2 so that bool b3 holds true.

Take a moment to analyze the condition and think about what values would make it true.

There are many right solutions!
*/
#include <iostream>

using namespace std;
int main()
{
    bool b1 = true;
    bool b2 = false;
    bool b3 = b1 || b2;

    cout << "b3 = " << b3 << endl;
}
