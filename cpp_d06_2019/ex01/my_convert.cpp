//
// EPITECH PROJECT, 2020
// c++pool
// File description:
// my_convert.cpp
//

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>

void Celcius(float degrees)
{
    float formule = 9.0 / 5.0 * degrees + 32;

    std::cout << std::fixed << std::setprecision(3);
    std::cout << std::setw(16) << std::fixed << formule << std::setw(16) << "Fahrenheit" << std::endl;
}

void Fahrenheit(float degrees)
{
    float formule = 5.0 / 9.0 * (degrees - 32);

    std::cout << std::fixed << std::setprecision(3);
    std::cout << std::setw(16) << std::fixed << formule << std::setw(16) << "Celsius" << std::endl;
}

int main(void)
{
    char data[1000];
    float degrees = 0;

    std::cin >> degrees >> data;
    if (strcmp(data, "Celsius") == 0)
        Celcius(degrees);
    if (strcmp(data, "Fahrenheit") == 0)
        Fahrenheit(degrees);
    return (0);
}