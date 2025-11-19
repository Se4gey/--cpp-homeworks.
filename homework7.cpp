#include <iostream>

using namespace std;

int main() {
    int x;
    
    // Запрос числа у пользователя
    cout << "Введите число: ";
    cin >> x;
    
    // Отрицательные числа не могут быть палиндромами
    if (x < 0) {
        cout << "false" << endl;
        return 0;
    }
    
    int original = x;
    int reversed = 0;
    
    // Переворачиваем число
    while (x > 0) {
        int digit = x % 10;          // Получаем последнюю цифру
        reversed = reversed * 10 + digit; // Добавляем цифру к перевернутому числу
        x = x / 10;                 // Убираем последнюю цифру
    }
    
    // Проверяем, равно ли исходное число перевернутому
    bool isPalindrome = (original == reversed);
    
    // Выводим результат
    if (isPalindrome) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    
    return 0;
}