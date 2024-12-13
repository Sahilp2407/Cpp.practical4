//WAP to Calculate Simple Interest
#include <iostream>
    using namespace std;

float calculateSimpleInterest(float p, float r, float t)
{
    return (p * r * t) / 100;
}

int main()
{
    float p, r, t, si;
    cout << "Enter Principal Amount: ";
    cin >> p;
    cout << "Enter Rate of Interest: ";
    cin >> r;
    cout << "Enter Time in Years: ";
    cin >> t;
    si = calculateSimpleInterest(p, r, t);
    cout << "Simple Interest: " << si;
    return 0;
}