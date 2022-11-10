#include <iostream>

void check_prod_n_mult(int num, int b);

int main()
{
    int num;
    int b;
    std::cout << "Enter number = ";
    std::cin >> num;
    std::cout << "Enter b = ";
    std::cin >> b;
    check_prod_n_mult(num, b);
}

void check_prod_n_mult(int num, int b) {
    int prod_of_numbers = 1; //чтобы не занулилось при умножении
    int sum_of_numbers = 0;
    int before = num;
    while (num > 0) {
        prod_of_numbers *= num % 10;
        sum_of_numbers += num % 10;
        num /= 10;
    }
    if (prod_of_numbers > b) {
        std::cout << "19.1 - " << "Bigger" << std::endl;
    }
    else {
        std::cout << "19.1 - " << "Not bigger" << std::endl;
    }
    if (sum_of_numbers % 7 == 0) {
        std::cout << "19.2 - " << "Multiplicity" << std::endl;
    }
    else {
        std::cout << "19.2 - " << "Not multiplicity" << std::endl;
    }
}