// labr31.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>

int main() {
    setlocale(LC_ALL, "Russian");

    double number;

    std::cout << "Введите число: ";

    if (!(std::cin >> number)) {
        std::cout << "Ошибка: введено некорректное значение.\n";
        return 1;
    }

    if (number < 0) {
        std::cout << "Модуль числа: " << std::abs(number) << '\n';
    }
    else {
        std::cout << "Число: " << number << '\n';
    }

    return 0;
}
