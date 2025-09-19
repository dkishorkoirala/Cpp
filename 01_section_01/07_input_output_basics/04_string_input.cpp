/*String Input


Strings behave a bit differently then other types. There are several ways to get input into a string in C++. Here are the most common methods:

1. Using cin:

std::string str;
std::cin >> str;
Note: This only reads until the first whitespace

2. Using getline() (recommended for sentences with spaces):

std::string str;
std::getline(std::cin, str);
This reads entire line including spaces.

3. Using both cin and getline (when reading after cin):

int n;
std::string str;
std::cin >> n;
std::cin.ignore();  // Clear the newline from input buffer
std::getline(cin, str);
Without cin.ignore(), getline would read the leftover newline instead of waiting for input*/