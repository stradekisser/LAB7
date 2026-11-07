#include <iostream>

int main() {
    int choice;
    double a, b, result;

    do {
        std::cout << "=== КАЛЬКУЛЯТОР ===" << std::endl;
        std::cout << "1. Сложение (+)" << std::endl;
        std::cout << "2. Вычитание (-)" << std::endl;
        std::cout << "3. Умножение (*)" << std::endl;
        std::cout << "4. Деление (/)" << std::endl;
        std::cout << "5. Остаток от деления (%)" << std::endl;
        std::cout << "0. Выход" << std::endl;
        std::cout << "Выберите операцию: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Введите два числа: ";
                std::cin >> a >> b;
                result = a + b;
                std::cout << a << " + " << b << " = " << result << std::endl;
                break;

            case 2:
                std::cout << "Введите два числа: ";
                std::cin >> a >> b;
                result = a - b;
                std::cout << a << " - " << b << " = " << result << std::endl;
                break;

            case 3:
                std::cout << "Введите два числа: ";
                std::cin >> a >> b;
                result = a * b;
                std::cout << a << " * " << b << " = " << result << std::endl;
                break;

            case 4:
                std::cout << "Введите два числа: ";
                std::cin >> a >> b;
                if (b == 0) {
                    std::cout << "Ошибка: деление на ноль!" << std::endl;
                } else {
                    result = a / b;
                    std::cout << a << " / " << b << " = " << result << std::endl;
                }
                break;

            case 5:
                std::cout << "Введите два целых числа: ";
                std::cin >> a >> b;
                if (b == 0) {
                    std::cout << "Ошибка: деление на ноль!" << std::endl;
                } else {
                    int int1 = static_cast<int>(a);
                    int int2 = static_cast<int>(b);
                    result = int1 % int2;
                    std::cout << int1 << " % " << int2 << " = " << result << std::endl;
                }
                break;

            case 0:
                std::cout << "До свидания!" << std::endl;
                break;

            default:
                std::cout << "Неверный выбор!" << std::endl;
                break;
        }

        std::cout << std::endl;

    } while (choice != 0);

    return 0;
}