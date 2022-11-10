#include <iostream>

double sum_with_sale(double sum);

int main(){  
	double sum;
	std::cout << "Enter sum = ";
	std::cin >> sum;
	std::cout << "Sum with sale is: " << sum_with_sale(sum);
}

double sum_with_sale(double sum) {
	if (sum > 1000) {
		double result_sum = sum - sum * 0.1;
		return result_sum;
	}
	else {
		double result_sum = sum;
		return result_sum;
	}
}