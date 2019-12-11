#include <iostream>


using namespace std;

void pr() {
    cout << "HI" << endl;
}

int mulTwoNumber(int a, int b) {
    int sum = a * b;
    pr();
    
    return sum;
}
void printHelloWorld() {
    cout << "Hello World!" << endl;

    return; // option
}

int main() {
    cout << mulTwoNumber(1, 2) << endl;
    cout << mulTwoNumber(3, 4) << endl;
    cout << mulTwoNumber(8, 13) << endl;
    printHelloWorld();
    return 0;
}