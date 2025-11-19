#include <iostream>
#include <string>
#include <cctype> // для tolower

using namespace std;

int main() {
    string input;
    
    // Запрос строки у пользователя
    cout << "Введите строку: ";
    getline(cin, input);
    
    bool isIsogram = true;
    
    // Проверяем каждый символ в строке
    for (int i = 0; i < input.length() && isIsogram; i++) {
        // Пропускаем пробелы
        if (input[i] == ' ') continue;
        
        char currentChar = tolower(input[i]); // Приводим к нижнему регистру для единообразия
        
        // Сравниваем текущий символ со всеми последующими символами
        for (int j = i + 1; j < input.length(); j++) {
            // Пропускаем пробелы в сравнении
            if (input[j] == ' ') continue;
            
            char compareChar = tolower(input[j]); // Приводим к нижнему регистру
            
            // Если нашли повторяющийся символ
            if (currentChar == compareChar) {
                isIsogram = false;
                break;
            }
        }
    }
    
    // Вывод результата
    if (isIsogram) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    
    return 0;
}