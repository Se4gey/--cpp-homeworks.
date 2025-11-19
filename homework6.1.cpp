#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Инициализация генератора случайных чисел
    srand(time(0));
    
    const int SIZE = 5;
    int arr[SIZE];
    
    // Заполнение массива случайными числами (от 0 до 99)
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 100;
    }
    
    // Вывод массива
    cout << "Массив: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // Вычисление суммы элементов массива
    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += arr[i];
    }
    
    // Вывод суммы
    cout << "Сумма элементов массива: " << sum << endl;
    
    return 0;
}