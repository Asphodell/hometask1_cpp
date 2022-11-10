#include <iostream>

double sum(int minutes, int day);

int main() //тариф - 10 рублей за 1 минуту 
{
    int minutes;
    int day;
    std::cout << "Enter minutes = " << std::endl;
    std::cin >> minutes;
    std::cout << "Enter day (from 0 to 7) = " << std::endl; //без "защиты от дурака"
    std::cin >> day;
    std::cout << "Your sum is: " << sum(minutes, day);
}

double sum(int minutes, int day) {
    if ((day == 6) or (day == 7)) {
        double sum = (minutes * 10) - (minutes * 10 * 0.2);
        return sum;
    }
    else {
        int sum = minutes * 10;
        return sum;
    }
}