#include <iostream>

void recommendation(float weight, float height);

int main()
{
    float weight;
    float height;
    std::cout << "Enter your weight = ";
    std::cin >> weight;
    std::cout << "Enter your height = ";
    std::cin >> height;
    recommendation(weight, height);
}

void recommendation(float weight, float height) {
    if ((height - weight) > 100) {
        std::cout << "Need to get fatter";
    }
    if ((height - weight) < 100) {
        std::cout << "Need to lose weight";
    }
    if ((height - weight) == 100) {
        std::cout << "Perfect";
    }
}