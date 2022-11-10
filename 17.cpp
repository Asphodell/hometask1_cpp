#include <iostream> 

void right_word(int number);

int main()
{
    setlocale(0, "rus");

    int number;
    std::cout << "Введите число = " << std::endl;
    std::cin >> number;
    right_word(number);
}


void right_word(int number) {
    if (number > 20) { //после 20ти можно определять окончание по последней цифре числа
        number %= 10;
    }
    switch (number)
    {
    case 1:
        std::cout << "копейка" << std::endl;
        break;

    case 2: case 3: case 4:
        std::cout << "копейки" << std::endl;
        break;

    case 5: case 6: case 7: case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20:
        std::cout << "копеек" << std::endl; break;
    }
}