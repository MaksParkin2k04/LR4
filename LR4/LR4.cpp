// LR4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
#include <random>
#include <initializer_list>
#include <ctime>

int main()
{
    using namespace std;
    setlocale(LC_ALL, "Russian");

    /*
    int randomDigits_3[30]{}; // объявление массива
    int max = -100;
    int num_max;

    srand(time(NULL));
    for (int i = 0; i < 30; i++) // рандомные числа
    {
        randomDigits_3[i] = 200 + rand() % 101; // 200 ... 300
        if (randomDigits_3[i] > max) { // нахождение большего числа
            max = randomDigits_3[i];
            num_max = i;
        }
    }

    cout << endl << "Массив c числами oт 200 дo 300: \n";
    cout << "**********************************\n";
    ;

    for (int i = 0; i < 30; i++) // вывод чисел
    {

        cout << randomDigits_3[i] << " ";

    }
    cout << "**********************************\n";
    cout << "Максимальное значение массива: " << max;
    cout << "\n**********************************\n";
    cout << "Индекс элемента: " << num_max;
    cout << "\n**********************************\n";
    return 0;
    system("pause");
    */

    /*
    int randomDigits_3[100]{}, i;
    float Sum = 0;
    srand(time(NULL));

    for (int i = 0; i < 30; i++) // рандомные числа
    {
        randomDigits_3[i] = -10 + rand() % 20 + 1; // -10 ... 10
        Sum += randomDigits_3[i];

    }
    cout << endl << "Массив c числами oт -10 дo 10: \n";
    cout << "**********************************\n";

    for (int i = 0; i < 30; i++) // вывод чисел
    {
        cout << randomDigits_3[i] << " ";


    }
    cout << "\n**********************************";
    cout << "\nСредне арифметическое: " << Sum / 100 << "\n";
    cout << "**********************************\n";
    system("pause");
    */

    /*
    int randomDigits_3[15]{}, i, j, pr = 1, d;
    srand(time(NULL));

    for (int i = 0; i < 15; i++) // рандомные числа
    {
        randomDigits_3[i] = -5 + rand() % 10 + 1; // -10 ... 10
        if (randomDigits_3[i] > 0 and randomDigits_3[i] % 2 == 0) {
            if (randomDigits_3[i] % 2 == 0) {
                pr *= randomDigits_3[i];
            }
        }

    }
    cout << endl << "Массив c числами oт -5 дo 5: \n";
    cout << "**********************************\n";

    for (int i = 0; i < 15; i++) // вывод чисел
    {
        cout << randomDigits_3[i] << " ";
    }

    cout << "\n**********************************\n";
    cout << "Обновленный массив\n";
    cout << "**********************************\n";

    for (i = 0; i < 15; i++)
    {
        if (randomDigits_3[i] < 0)
        {
            randomDigits_3[i] = pr;
        }
        cout << randomDigits_3[i] << " ";
    }
    cout << "\n**********************************\n";

    */

    /*
    int randomDigits_3[25]{}, i,j, pr = 1, d;
    srand(time(NULL));

    for (int i = 0; i < 25; i++) // рандомные числа
    {
        randomDigits_3[i] = -5 + rand() % 10 + 1; // -10 ... 10
        if ( randomDigits_3[i] > 0 and randomDigits_3[i] % 2 == 0) {
            pr *= randomDigits_3[i];
        }

    }
    cout << endl << "Массив c числами oт -5 дo 5: \n";
    cout << "**********************************\n";

    for (int i = 0; i < 25; i++) // вывод чисел
    {
        cout << randomDigits_3[i] << " ";
    }
    cout << "\n**********************************\n";
    cout << "Обновленный массив\n";
    cout << "\n**********************************\n";

    for (i = 0; i < 24; i++)
        for (j = i + 1; j < 25; j++)
            if (randomDigits_3[i] > randomDigits_3[j]) {
                d = randomDigits_3[i];
                randomDigits_3[i] = randomDigits_3[j];
                randomDigits_3[j] = d;
            }

    cout << "\n**********************************\n";
    for (i = 0; i < 25; i++) {
        cout <<  randomDigits_3[i] << " ";
    }
    cout << "\n**********************************\n";
    system("pause");
    */


    /*
    //Задание 1

    int randomDigits_3[60]{}, i, j,  d;
    float pr = 1.0;
    srand(time(NULL));

    for (int i = 0; i < 60; i++) // рандомные числа
    {
        randomDigits_3[i] = -5 + rand() % 10 + 1; // -10 ... 10
        if (randomDigits_3[i] > 0 and randomDigits_3[i] % 2 == 0) {
            if (i % 2 == 0) {
                pr += randomDigits_3[i];
                pr /= 60;
            }
        }

    }
    cout << endl << "Массив c числами oт -5 дo 5: \n";
    cout << "**********************************\n";

    for (int i = 0; i < 60; i++) // вывод чисел
    {
        cout << randomDigits_3[i] << " ";
    }

    cout << "\n**********************************\n";
    cout << "Обновленный массив\n";
    cout << "**********************************\n";

    for (i = 0; i < 60; i++)
    {
        if (randomDigits_3[i] % 2 == 0)
        {
            randomDigits_3[i] = pr;
        }
        cout << randomDigits_3[i] << " ";
    }
    cout << "\n**********************************\n";

    */

    
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
