/*Type Casting Part 2


In C++, we can convert numbers to strings and vice versa. To convert a value to string, we can use the std::to_string() function:

int number = 789;
bool isValid = true;
string text1 = to_string(number);  // becomes "789"
string text2 = isValid ? "true" : "false";  // becomes "true"
When you convert a double to a string using to_string(), it will by default show 6 decimal places, even if the original number doesn't have that many decimal places.

For example:

double n1 = 789.0;
string text1 = to_string(n1);
// becomes "789.000000"

double n2 = 789.5;
string text2 = to_string(n2);
// becomes "789.500000"

double n3 = 789.123;
string text3 = to_string(n3);
// becomes "789.123000"
To convert a string to a different type, we have several options:

String to Integer:

string numberText = "123";
int number = stoi(numberText);  // becomes 123
String to Double:

string decimalText = "45.67";
double decimal = stod(decimalText);  // becomes 45.67
Note: When converting strings to numbers, if the string contains invalid characters, these functions will throw an error:

string invalidNumber = "abc";
int number = stoi(invalidNumber);  // This will throw an error
*/
