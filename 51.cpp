// WAP to Perform reverse string
#include <iostream>
#include <string>
using namespace std;

void reverseString()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    reverse(str.begin(), str.end());
    cout << str;
}

int main()
{
    reverseString();
    return 0;
}