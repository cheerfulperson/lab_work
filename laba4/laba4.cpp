﻿// laba4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <ctime>

using namespace std;
int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "Rus");

    int k, zero_first_position,
        composition = 1,
        number_of_zeros = 0;

    const int n = 20;
    int a[n] = {};

    cout << "Вы сами будете вводить элементы массива: 1 - да, 2 - нет "; cin >> k;
    if (k == 1) {
        for (int i = 0; i < n; i++)
        {
            cout << i << ")"; cin >> a[i];
        }
    }
    else {
        for (int i = 0; i < n; i++)
        {
            a[i] = rand() % 21;
            cout << a[i] << " ";
        }
    }
    for (int i = 0; i < n; i++) {
        if (a[i] == 0 ) {
            number_of_zeros += 1;
            zero_first_position = i;
        }
        if (i > zero_first_position && number_of_zeros < 2) {
            composition *= a[i];
        }  
    }
    cout << "Произведение равно " << composition;
    return 0;

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.