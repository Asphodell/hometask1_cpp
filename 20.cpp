#include <iostream>

void checking(float a, float b, float c, float d);

int main() //как я понял, достаточно лишь того, чтобы меньший прямоугольник смог полностью лежать внутри большого прямоугольника, тогда его можно будет расположить так, чтобы стороны были параллельны
{
    float a;
    float b;
    float c;
    float d;
    std::cout << "Enter a = ";
    std::cin >> a;
    std::cout << "Enter b = ";
    std::cin >> b;
    std::cout << "Enter c = ";
    std::cin >> c;
    std::cout << "Enter d = ";
    std::cin >> d;
    checking(a, b, c, d);
}

void checking(float a, float b, float c, float d) { //нужно, чтобы ширина/длина меньшего прямоугольника была меньше ширины/длины большего прямоугольника
    if (((a < c) and (b < d)) or ((a < d) and (b < c))) {
        std::cout << "Yes";
    }
    else {
        std::cout << "No";
    }
}