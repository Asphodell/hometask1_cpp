#include <iostream>
bool checking_rule(float a, float b, float c);
bool checking_sides(float a, float b, float c);
int main()
{
	float a;
	float b;
	float c;
	std::cout << "Enter a" << std::endl;
	std::cin >> a;
	std::cout << "Enter b" << std::endl;
	std::cin >> b;
	std::cout << "Enter c" << std::endl;
	std::cin >> c;
	if ((checking_rule(a, b, c) == true) and (checking_sides(a, b, c) == true)) { // если оба условия правда, то треугольник равнобедренный
		std::cout << "Isosceles";
	}
	else {
		std::cout << "Not isosceles";
	}
}

bool checking_rule(float a, float b, float c) { //проверяем треугольник на существование по знаменитому правилу, если всё ок - возвращаем правду, в противном случае - false.
	if ((a <= b + c) and (b <= a + c) and (c <= a + b)) {
		return true;
	}
	else {
		return false;
	}
}

bool checking_sides(float a, float b, float c) { //проверяем на "равнобедренность"
	if ((a == b) or (b == c) or (a == c)) {
		return true;
	}
	else {
		return false;
	}
}
