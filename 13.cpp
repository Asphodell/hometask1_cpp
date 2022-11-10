#include <iostream>

void check_answer(int a, int b, int answer);

int main()
{
    int first_rand = std::rand() % 9;
    std::cout << "a = " << first_rand << std::endl;
    int second_rand = std::rand() % 9;
    std::cout << "b = " << second_rand << std::endl;
    int answer;
    std::cout << "Enter answer a * b = ";
    std::cin >> answer;
    check_answer(first_rand, second_rand, answer);
}

void check_answer(int a, int b, int answer) {
    int result = a * b;
    if (result == answer) {
        std::cout << "All right!";
    }
    else {
        std::cout << "No :P";
    }
}
