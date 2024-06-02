#include <iostream>

// Function declarations
void showMenu();
void addNumbers();
void subtractNumbers();
void multiplyNumbers();
void divideNumbers();

int main() {
    int choice;

    do {
        showMenu();
        std::cin >> choice;

        switch (choice) {
            case 1:
                addNumbers();
                break;
            case 2:
                subtractNumbers();
                break;
            case 3:
                multiplyNumbers();
                break;
            case 4:
                divideNumbers();
                break;
            case 5:
                std::cout << "Exiting the application. Goodbye!" << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please select a valid option." << std::endl;
        }
    } while (choice != 5);

    return 0;
}

void showMenu() {
    std::cout << "===============================" << std::endl;
    std::cout << "  Fun Simple C++ Application   " << std::endl;
    std::cout << "===============================" << std::endl;
    std::cout << "1. Add two numbers" << std::endl;
    std::cout << "2. Subtract two numbers" << std::endl;
    std::cout << "3. Multiply two numbers" << std::endl;
    std::cout << "4. Divide two numbers" << std::endl;
    std::cout << "5. Exit" << std::endl;
    std::cout << "Choose an option: ";
}

void addNumbers() {
    double num1, num2;
    std::cout << "Enter two numbers to add: ";
    std::cin >> num1 >> num2;
    std::cout << "The sum is: " << num1 + num2 << std::endl;
}

void subtractNumbers() {
    double num1, num2;
    std::cout << "Enter two numbers to subtract: ";
    std::cin >> num1 >> num2;
    std::cout << "The difference is: " << num1 - num2 << std::endl;
}

void multiplyNumbers() {
    double num1, num2;
    std::cout << "Enter two numbers to multiply: ";
    std::cin >> num1 >> num2;
    std::cout << "The product is: " << num1 * num2 << std::endl;
}

void divideNumbers() {
    double num1, num2;
    std::cout << "Enter two numbers to divide: ";
    std::cin >> num1 >> num2;
    if (num2 != 0) {
        std::cout << "The quotient is: " << num1 / num2 << std::endl;
    } else {
        std::cout << "Error: Division by zero is not allowed." << std::endl;
    }
}
