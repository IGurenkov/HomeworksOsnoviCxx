﻿#include <iostream>
/*
1. Написать программу, вычисляющую выражение a * (b + (c / d)) и выводящую результат с плавающей точкой, где a, b, c, d – целочисленные константы.
Используйте static_cast или СStyle cast к float чтобы выполнить точное деление.
2. Дано целое число. Если оно меньше или равно 21, то выведите на экран разницу между этим числом и числом 21.
Если же заданное число больше, чем 21, необходимо вывести удвоенную разницу между этим числом и 21. При выполнении задания
следует использовать тернарный оператор (?:).
* Описать трёхмерный целочисленный массив, размером 3х3х3 и указатель на значения внутри массива и при помощи операции разыменования
вывести на экран значение центральной ячейки получившегося куба [1][1][1].
** Написать программу, вычисляющую выражение из первого задания, а переменные для неё объявлены и инициализировать в другом cpp файле.
Используйте extern.*/

extern int a;
extern int b;
extern int c;
extern int d;

int main()
{
    // Задание 1 и 4

    /*int a = 5;
    int b = 3;
    int c = 7;
    int d = 9;

    float e = a * (b + (static_cast <float> (c) / d));
    
    std::cout << e << std::endl;*/
    
    float e = a * (b + (static_cast <float> (c) / d));

    std::cout << e << std::endl;

    // Задание 2
    // Без ввода юзером
    /*int f = 30, g;
    g = (f <= 21) ? (21 - f) : (2 * (f - 21));
    std::cout << g << std::endl;
    */
    // С вводом от юзера
    std::cout << "Enter a number and press Enter: " << std::endl;

    int f{};
    std::cin >> f;
    std::cout << "Youre number: " << f << std::endl;
    std::cout << "Result: " << ((f <= 21) ? (21 - f) : (2 * (f - 21))) << std::endl;

    // Задание 3
    int arr[3][3][3]
    {
        {{ 10, 11, 12 }, { 13, 14, 15 }, { 16, 17, 18 }},
        {{ 19, 20, 21 }, { 22, 23, 24 }, { 25, 26, 27 }},
        {{ 28, 29, 30 }, { 31, 32, 33 }, { 34, 35, 36 }}
    };

    int* ptr = &arr[1][1][1];

    std::cout << *ptr << std::endl;

    std::cout << *(*(*(arr + 1) + 1) + 1) << std::endl;

    
  
}


