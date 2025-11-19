#include <iostream>

using namespace std;

int main()
{
    int n;
    int sum=0;
    cout <<"Введите число N: ";
    cin >> n;
    
    cout <<"Сумма чисел от 1 до " <<n<< ":" <<endl;
    for (int i = 1; i<=n; i++){
        sum+=i;
    }
    cout << sum ;
    return 0;
}