#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    
    // Запрос и ввод двух чисел
    cout << "Введите первое число: ";
    cin >> num1;
    
    cout << "Введите второе число: ";
    cin >> num2;
    
    // Проверка деления на ноль
    if (num2 == 0) {
        cout << "Ошибка: деление на ноль!" << endl;
        return 1;
    }
    
    // Вычисление остатка от деления
    int remainder = num1 % num2;
    
    // Вывод результата
    cout << "Остаток от деления: " << remainder << endl;
    
    return 0;
}