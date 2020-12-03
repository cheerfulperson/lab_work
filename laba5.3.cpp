// laba5.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.


//Вариант 2

#include <iostream>
#include <stdio.h>
#include <ctime> 

using namespace std;

int main()
{
    setlocale(_X_ALL, "Russian");
    srand(time(0));

    int n, m, i, j, index_n, index_m, element,
        biggest_num = 0;
   
    cout << "Input n = "; cin >> n;
    cout << "Input m = "; cin >> m;

    int** array = new int* [n];
    for (i = 0; i < n; i++) {
        array[i] = new int[m];
        for (j = 0; j < m; j++) {
            /*cout << "array[" << i << "][" << j << "] = "; cin >> array[i][j];*/
            array[i][j] = rand() % 20;
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (array[i][j] > biggest_num) {
                biggest_num = array[i][j];
                index_n = i;
                index_m = j;
            }
        }
    }
    
    cout << endl;
    for (j = 0; j < m; j++) {
        if (index_n != 0) {
            element = array[0][j];
            array[0][j] = array[index_n][j];
            array[index_n][j] = element;
        }
    }
    for (i = 0; i < n; i++) {     
        if (index_m != 0) {
            element = array[i][0];
            array[i][0] = array[i][index_m];
            array[i][index_m] = element;
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++)
            printf("%4d", array[i][j]);
        cout << endl;
    }
    delete[] array;
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
