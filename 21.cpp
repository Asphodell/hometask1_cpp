#include <iostream>

int main()
{
    setlocale(0, "rus");
    std::cout << "Логический тип данных:" << std::endl;
    std::cout << "bool: " << sizeof(bool) << " bytes" << std::endl;
    std::cout << "Символьный тип данных:" << std::endl;
    std::cout << "char: " << sizeof(char) << " bytes" << std::endl;
    std::cout << "wchar_t: " << sizeof(wchar_t) << " bytes" << std::endl;
    std::cout << "char16_t: " << sizeof(char16_t) << " bytes" << std::endl;
    std::cout << "char32_t: " << sizeof(char32_t) << " bytes" << std::endl;
    std::cout << "Целочисленный тип данных:" << std::endl;
    std::cout << "short: " << sizeof(short) << " bytes" << std::endl;
    std::cout << "int: " << sizeof(int) << " bytes" << std::endl;
    std::cout << "long: " << sizeof(long) << " bytes" << std::endl;
    std::cout << "long long: " << sizeof(long long) << " bytes" << std::endl;
    std::cout << "Тип данных с плавающей запятой: " << std::endl;
    std::cout << "float: " << sizeof(float) << " bytes" << std::endl;
    std::cout << "double: " << sizeof(double) << " bytes" << std::endl;
    std::cout << "long double: " << sizeof(long double) << " bytes" << std::endl;
    std::cout << "Вывод: в презентации нас проверили на смекалку (или нагло соврали..) и wchar_t занимает не 1, а 2 байта" << std::endl;
}
