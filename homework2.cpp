#include <iostream>

using namespace std;

int main() {
    double num1, num2, num3;
    
    // Запрос и ввод трех чисел
    cout << "Введите первое число: ";
    cin >> num1;
    
    cout << "Введите второе число: ";
    cin >> num2;
    
    cout << "Введите третье число: ";
    cin >> num3;
    
    // Вычисление среднего арифметического
    double average = (num1 + num2 + num3) / 3;
    
    // Вывод результата с точностью 5 знаков после запятой
    cout.precision(6);
    cout << "Среднее арифметическое: " << fixed << average << endl;
    
    return 0;
}