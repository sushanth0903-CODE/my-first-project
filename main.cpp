#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "=== MY CALCULATOR ===" << endl;
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Result: ";
    if (op == '+') cout << num1 + num2;
    else if (op == '-') cout << num1 - num2;
    else if (op == '*') cout << num1 * num2;
    else if (op == '/') cout << num1 / num2;
    else cout << "Invalid operator!";
    
    cout << endl;
    return 0;
}
