#include <iostream>

using namespace std;

// Функция для вычисления суммы трех чисел
int sumOfThree(int a, int b, int c) {
    return a + b + c;
}

int main() {
    int a, b, c;
    
    // Запрос трех чисел у пользователя
    cout << "Введите первое число: ";
    cin >> a;
    
    cout << "Введите второе число: ";
    cin >> b;
    
    cout << "Введите третье число: ";
    cin >> c;
    
    // Вызов функции и вывод результата
    int result = sumOfThree(a, b, c);
    cout << "Сумма трех чисел: " << result << endl;
    
    return 0;
}