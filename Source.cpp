#include <iostream>

int main() {
    // ���������� ���������� ��� �������� �����
    double n;

    setlocale(LC_ALL, "rus");
    // ������ ����� �����
    std::cout << "������� ����� �����: ";
    std::cin >> number;

    // �������� �� �������� ��� ����������
    if (number % 2 == 0) {
        std::cout << number << " - ������ �����." << std::endl;
    }
    else {
        std::cout << number << " - �������� �����." << std::endl;
    }

    return 0;
}
