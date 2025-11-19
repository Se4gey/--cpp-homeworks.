#include <iostream>

int sumToN(int n) {
    // Базовый случай рекурсии
    if (n == 1) {
        return 1;
    }
    // Рекурсивный случай
    return n + sumToN(n - 1);
}

int main() {
    int n;
    
    std::cout << "Введите число n: ";
    std::cin >> n;
    
    if (n <= 0) {
        std::cout << "Число n должно быть положительным!" << std::endl;
        return 1;
    }
    
    int result = sumToN(n);
    std::cout << "Сумма чисел от 1 до " << n << " = " << result << std::endl;
    
    return 0;
}
