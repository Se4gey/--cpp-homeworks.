#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    
    // Запрос строки у пользователя
    cout << "Введите строку: ";
    getline(cin, input);
    
    // Вывод длины строки
    cout << "Длина строки: " << input.length() << endl;
    
    return 0;
}