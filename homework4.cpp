#include <iostream>

using namespace std;

int main() {
    char ch;
    
    // Запрос и ввод символа
    cout << "Введите символ: ";
    cin >> ch;
    
    // Вывод самого символа
    cout << "Символ: " << ch << endl;
    
    // Вывод кода символа в ASCII
    cout << "Код в ASCII: " << static_cast<int>(ch) << endl;
    
    // Вывод кода следующего символа
    int nextCode = static_cast<int>(ch) + 1;
    cout << "Код следующего символа: " << nextCode << endl;
    
    // Вывод следующего символа
    char nextChar = static_cast<char>(nextCode);
    cout << "Следующий символ: " << nextChar << endl;
    
    return 0;
}