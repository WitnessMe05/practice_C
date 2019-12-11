#include <iostream>

using namespace std;

// Declaration
int add(int a, int b); // prototype
int mul(int a, int b);
int subtract(int a, int b);

int main() {
    cout << add(1, 2) << endl;
    cout << mul(1, 2) << endl;
    cout << subtract(1, 2) << endl;

    return 0;
}

// Definition
int add(int a, int b) {
    return a + b;
}

int mul(int a, int b) {
    return a * b;
}

int subtract(int a, int b) {
    return a - b;
}