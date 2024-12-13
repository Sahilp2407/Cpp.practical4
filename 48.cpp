//WAP TO CALCULATE CALCULATE SUM OF DIGIT OF GIVEN NUMBERS:
#include <iostream>
using namespace std;

int main() {
    int number, sum = 0;
    cout << "Enter a number: ";
    cin >> number;
    number = abs(number);
    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }
    cout << "The sum of the digits is: " << sum << endl;

    return 0;
}