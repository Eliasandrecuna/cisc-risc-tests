#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int result = fibonacci(10); // Calcula o 10º número da sequência de Fibonacci
    printf("Fibonacci(10) = %d\n", result);
    return 0;
}
