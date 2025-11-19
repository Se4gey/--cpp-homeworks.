#include <iostream>

using namespace std;

int main()
{
    int radius;
    const double pi= 3.14;
    cout << "Введите радиус: ";
    cin >> radius;
    double s = pi*radius*radius;
    
    cout <<"Площадь круга: "<< s;
    
    return 0;
}
    