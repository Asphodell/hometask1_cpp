#include <iostream>

void check_month(int month);
int main()
{
    int month;
    std::cout << "Enter number = ";
    std::cin >> month;
	check_month(month);
}

void check_month(int month) {
	switch (month)
	{
	case 1:
		std::cout << "January, Winter";
		break;
	case 2:
		std::cout << "February, Winter";
		break;
	case 3:
		std::cout << "March, Spring";
		break;
	case 4:
		std::cout << "April, Spring";
		break;
	case 5:
		std::cout << "May, Spring";
		break;
	case 6:
		std::cout << "Juny, Summer";
		break;
	case 7:
		std::cout << "July, Summer";
		break;
	case 8:
		std::cout << "August, Summer";
		break;
	case 9:
		std::cout << "September, Autumn";
		break;
	case 10:
		std::cout << "October, Autumn";
		break;
	case 11:
		std::cout << "November, Autumn";
		break;
	case 12:
		std::cout << "December, Winter";
		break;
	default:
		std::cout << "Impossible...";
		break;
	}
}
