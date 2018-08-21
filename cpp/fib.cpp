#include <iostream>

int fib(int n);

int main() {
    std::cout << "Hello world!" << std::endl;

    std::cout << "First ten Fibonacci numbers:" << std::endl;
    for (int i = 1; i < 11; i++) {
        std::cout << i << ": " << fib(i) << std::endl;
    }

    std::cout << "Enter a number to see that Fibonacci number: ";
    int n;
    std::cin >> n;
    std::cout << fib(n) << std::endl;

    return 0;
}

int fib(int n) {
    int a = 0;
    int b = 1;
    int c = 1;

    while (n > 2) {
        a = b;
        int next = b + c;
        b = c;
        c = next;
        n--;
    }

    return c;
}

int fibr(int n) {
    if (n <= 2) {
        return 1;
    } else {
        return fibr(n - 1) + fibr(n - 2);
    }
}
