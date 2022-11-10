#include <iostream>

void checking(int a);

int main()
{
    int a;
    std::cout << "Enter number = ";
    std::cin >> a;
    checking(a);
}

void checking(int a) {
    int count = 0;
    int sum_of_first_3 = 0;
    int sum2 = 0;
    while (a > 0) {
        if (count < 3) { 
            sum_of_first_3 = sum_of_first_3 + a % 10;
            count += 1;
        }
        else {
            sum2 = sum2 + a % 10;
        }
        a = a / 10;
    }
    if (sum_of_first_3 == sum2) {
        std::cout << "Happy!!";
    }
    else {
        std::cout << "Not happy.";
    }
}