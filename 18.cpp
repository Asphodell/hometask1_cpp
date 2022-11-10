#include <iostream>
#include <string> //импорт библиотеки со строками для решения задачи 

bool check_palindr(int number);

int main()
{
    int number;
    std::cout << "Enter number = ";
    std::cin >> number;
    if (check_palindr(number) == true) {
        std::cout << "Yes";
    }
    else {
        std::cout << "No";
    }
}

bool check_palindr(int number) { //т.к. мы знаем, что исходное число - четырёхзначное, то задача просто сводится к его разбиению; в принципе, данный алгоритм подойдёт не только на 4х зн. чисел
    std::string str = "";
    int before = number; // запоминаем число в переменную, потому что будем менять номер после каждой итерации, а надо сравнить результат с исходным 
    while (number > 0) {
        str += std::to_string(number % 10);
        number /= 10;
    }

    if (std::stoi(str) == before) { //переводим строку в число
        return true;
    }
    else {
        return false;
    }
}