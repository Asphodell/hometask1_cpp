#include <iostream>
#include "cmath"
double area_trapezoid(double b1, double b2, double h);
void length_n_area_circle(double r);
void area_triangle(double a, double b);
int sum_of_num(int num);
void cartesian_to_polar(double x,  double y);
void polar_to_cartesian(double ro, double fi);
void answer_q(double first_coeff, double second_coeff, double free_coeff);
void finding_medians(double &fst_side, double &snd_side, double &trd_side);

int main() {
    int number_of_the_task;
    std::cout << "Enter number of the task: " << std::endl;
    std::cin >> number_of_the_task;
    switch(number_of_the_task){
        case 1:
            double b1;
            double b2;
            double h;
            std::cout << "Enter b1 = " << std::endl;
            std::cin >> b1;
            std::cout << "Enter b2 = " << std::endl;
            std::cin >> b2;
            std::cout << "Enter h = " << std::endl;
            std::cin >> h;
            std::cout << area_trapezoid(b1, b2, h) << std::endl;
            break;

        case 2:
            double r;
            std::cout << "Enter r = " << std::endl;
            std::cin >> r;
            length_n_area_circle(r);
            break;

        case 3:
            double a;
            double b;
            std::cout << "Enter a = " << std::endl;
            std::cin >> a;
            std::cout << "Enter b = " << std::endl;
            std::cin >> b;
            area_triangle(a, b);
            break;

        case 4:
            int num;
            std::cout << "Enter num = " << std::endl;
            std::cin >> num;
            std::cout << "The sum is " << sum_of_num(num) << std::endl;
            break;

        case 5:
            double x;
            double y;
            std::cout << "Enter x = " << std::endl;
            std::cin >> x;
            std::cout << "Enter y = " << std::endl;
            std::cin >> y;
            cartesian_to_polar(x, y);
            break;

        case 6:
            double ro;
            double fi;
            std::cout << "Enter ro = " << std::endl;
            std::cin >> ro;
            std::cout << "Enter fi = " << std::endl;
            std::cin >> fi;
            polar_to_cartesian(ro, fi);
            break;

        case 7:
            double first_coeff;
            std::cout << "Enter first coefficient = " << std::endl;
            std::cin >> first_coeff;
            double second_coeff;
            std::cout << "Enter second coefficient = " << std::endl;
            std::cin >> second_coeff;
            double free_coeff;
            std::cout << "Enter free coefficient = " << std::endl;
            std::cin >> free_coeff;
            answer_q(first_coeff, second_coeff, free_coeff);
            break;

        case 8:
            double fst_side; // float - потому что стало лень писать double..
            std::cout << "Enter 1st side = " << std::endl;
            std::cin >> fst_side;
            double snd_side;
            std::cout << "Enter 2nd side = " << std::endl;
            std::cin >> snd_side;
            double trd_side;
            std::cout << "Enter 3rd side = " << std::endl;
            std::cin >> trd_side;
            finding_medians(fst_side, snd_side, trd_side); //два раза выполняем функцию, изменяя данные значения до искомых, храня в них значения уже медиан
            finding_medians(fst_side, snd_side, trd_side); //так сложно, потому что не понял, как возвращать несколько значений из функции, а так можно было бы 2 раза прогнать функцию и всё;
            std::cout << fst_side << std::endl;
            std::cout<< snd_side << std::endl;
            std::cout << trd_side << std::endl;
            break;
        default:
            std::cout << "Error, enter a number from 1 to 8" << std::endl;
    }
    return 0;
}
//1
double area_trapezoid(double b1, double b2, double h){ // решил, что лучше использовать double, потому что
    // так задача будет намного универсальнее и функция будет "есть" вообще любые числа
    double square = ((b1 + b2) / 2) * h;
    return square;
}
//2
void length_n_area_circle(double r){
    double length_circle = 2 * M_PI * r;// выше импортировал библиотеку и взял оттуда число Пи для большей точности
    double area_circle = M_PI * pow(r, 2); // был просто в шоке, когда узнал, что в С++ нет простой операции возведения в степень...
    //здесь из стандартной библиотеки использую функцию для возведения радиуса в квадрат
    std::cout << "Length is: " << length_circle << std::endl;
    std::cout << "Area is " << area_circle << std::endl;
}
//3
void area_triangle(double a, double b) {
    double area_tr = (a * b) / 2;
    double hypotenuse = sqrt(pow(a, 2) + pow(b, 2));
    std::cout << "Area is: " << area_tr << std::endl;
    std::cout << "Hypotenuse is: " << hypotenuse << std::endl;
}
//4
int sum_of_num(int num){
    int sum = 0;
    while (num > 0){
        sum += num % 10;
        num = num / 10; // т.к. num - целочисленное, то здесь всегда будет происходить деление нацело
    }
    return sum;
}
//5
void cartesian_to_polar(double x, double y){
    double ro = sqrt(pow(x, 2) + pow(y, 2));
    double fi = atan(y / x);
    std::cout << "ro is: " << ro << std::endl;
    std::cout << "fi is: " << fi << std::endl;
}
//6
void polar_to_cartesian(double ro, double fi) {
    double x = ro * cos(fi);
    double y = ro * sin(fi);
    std::cout << "x is: " << x << std::endl;
    std::cout << "y is: " << y << std::endl;
}
//7
void answer_q(double first_coeff, double second_coeff, double free_coeff){
    double discriminant = pow(second_coeff, 2) - 4 * first_coeff * free_coeff;
    if (first_coeff == 0){
        double root = (-1 * free_coeff) / (second_coeff);
        std::cout << "root = " << root << std::endl;
    }
    else{
        if (discriminant >= 0){
            double root1 = ((-1 * second_coeff + sqrt(discriminant)) / (2 * first_coeff));
            double root2 = ((-1 * second_coeff - sqrt(discriminant)) / (2 * first_coeff));
            std::cout << "root1 = " << root1 << std::endl;
            std::cout << "root2 = " << root2 << std::endl;
        }
        else{
            std::cout << "There are no values on the real axis." << std::endl;
        }
    }
}
//8
void finding_medians(double &fst_side, double &snd_side, double &trd_side){
    fst_side = 0.5 * sqrt(2 * pow(fst_side, 2) + 2 * pow(snd_side, 2) - pow(trd_side, 2));
    snd_side = 0.5 * sqrt(2 * pow(snd_side, 2) + 2 * pow(trd_side, 2) - pow(fst_side, 2));
    trd_side = 0.5 * sqrt(2 * pow(fst_side, 2) + 2 * pow(trd_side, 2) - pow(snd_side, 2));
}