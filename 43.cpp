//C++ program to implement Swapping using Call by Function
#include <iostream>
using namespace std;

//Swap Function to demonstrate call by value method
void swap(int x, int y) {
    x = x + y;
    y = x - y;
    x = x - y;
    cout << "After Swapping in function x: " << x << " y: " << y << endl;
}

//Driver Code
int main(){
    int x=1, y=2;

    cout << "Before Swapping: ";
    cout << "x: " << x << ",y: " << y << endl;

    swap(x,y);

    cout << "After Swapping: ";
    cout << "x: " << x << ",y: " << y << endl;
    return 0;
}
