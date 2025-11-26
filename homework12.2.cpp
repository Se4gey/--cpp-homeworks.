#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    double score;

public:
    // Конструктор по умолчанию
    Student() {
        name = "";
        age = 0;
        score = 0.0;
    }

    // Конструктор с параметрами
    Student(string n, int a, double s) {
        name = n;
        age = a;
        score = s;
    }

    // Геттеры
    string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    double getScore() const {
        return score;
    }

    // Сеттеры
    void setName(string n) {
        name = n;
    }

    void setAge(int a) {
        age = a;
    }

    void setScore(double s) {
        score = s;
    }

    // Метод для проверки совершеннолетия
    bool isAdult() const {
        return age >= 18;
    }

    // Модифицированный метод для вывода информации
    void show() const {
        cout << "Имя: " << name << endl;
        cout << "Возраст: " << age << endl;
        cout << "Средний балл: " << score << endl;
        cout << "Совершеннолетний: " << (isAdult() ? "да" : "нет") << endl;
    }
};