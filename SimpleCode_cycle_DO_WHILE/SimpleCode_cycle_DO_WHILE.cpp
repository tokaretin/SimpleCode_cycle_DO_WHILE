#include <iostream>

using namespace std;

int main()
{
    int begin, end;
    cout << "Введите диапазон чисел:\n";
    cin >> begin >> end;

    int sum = 0;

    do
    {

        if (begin % 2 != 0)
            sum += begin;
        begin++;
        
    } while (begin <= end);

    cout << "Сумма нечетных числел = " << sum;
}

