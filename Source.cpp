#include <iostream>

int main() {
    // Объявление переменной для хранения числа
    double n;

    setlocale(LC_ALL, "rus");
    // Запрос ввода числа
    std::cout << "Введите целое число: ";
    std::cin >> number;

    // Проверка на четность или нечетность
    if (number % 2 == 0) {
        std::cout << number << " - четное число." << std::endl;
    }
    else {
        std::cout << number << " - нечетное число." << std::endl;
    }

    return 0;
}
