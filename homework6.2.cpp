#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    const int ROWS = 2;
    const int COLS = 2;
    int arr[ROWS][COLS];
    
    // Автоматическое заполнение массива случайными числами
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            arr[i][j] = rand() % 100; // числа от 0 до 99
        }
    }
    
    // Вывод всего массива
    cout << "Массив 2x2:" << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    // Вывод элементов главной диагонали
    cout << "Элементы главной диагонали: ";
    for (int i = 0; i < ROWS; i++) {
        cout << arr[i][i] << " ";
    }
    cout << endl;
    
    return 0;
}