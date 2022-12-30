#include <iostream>
#include "Stack.h"
#include "calc.h"

int main() {
    Stack<int> s;
    s.push(5);
    s.push(7);
    s.push(9);
    s.push(4);
    int temp, p;
    std:: string string;
    std:: cin >> string;
    std :: cout << Calculator::Calculate(string);
}

