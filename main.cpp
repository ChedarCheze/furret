



#include <iostream>
#include <string>


int addition(int a, int b) {
    return a + b;
}


int subtraction(int a, int b) {
    return a - b;
}

// Multiply
int multiply(int a, int b) {
    return a * b;
}

// Division Function
int divide(int a, int b) {

    if (b == 0) {
        std::cerr << "Cannot divide by 0!\n"; // Displays an error message
        exit(1); // Terminates program with an exit code of 1
    }
    return a / b;
}

int main() {
    std::string eggbert = "leggbert";
    std::cout << "Hello World!\n";
    return 0;
}
