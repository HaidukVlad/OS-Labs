#include <iostream>
#include "Fibonacci.h"

int main() {
    int n;
    std::cout << "Enter positive number: ";
    std::cin >> n;

    try {
        Fibonacci fibonacci;
        std::vector<int> fibonacciNumbers = fibonacci.generateFirstNFibonacci(n);
        std::cout << "First " << n << " Fibonacci numbers: ";
        for (size_t i = 0; i < fibonacciNumbers.size(); i++) std::cout << fibonacciNumbers[i] << " ";
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}