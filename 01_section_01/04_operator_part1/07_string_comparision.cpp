/*String Comparison


In C++, comparing strings can be done in multiple ways. Sincestd::string is a class, it has overloaded operators that make string comparison intuitive and straightforward.

The most common way to compare strings is using comparison operators (==, !=, <, >, <=, >=):

string str1 = "hello";
string str2 = "hello";
string str3 = "Hello";

bool result1 = (str1 == str2);  // true
bool result2 = (str1 == str3);  // false (case-sensitive)
bool result3 = (str1 != str3);  // true
You can also use the compare() method, which returns 0 if strings are equal, <0 if the first string is lexicographically smaller, and >0 if it's larger:

string str1 = "a";
string str2 = "b";
string str2 = "c";

cout << str2.compare(str1) << endl;
// Positive (b comes after a)

cout << str2.compare(str3) << endl;
// Negative (b comes before c)

cout << str2.compare(str2) << endl;
// 0 (equal strings)*/