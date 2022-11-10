#include <iostream>


int finding_hours(int sec);
int finding_minutes(int sec);

int main() {
	double k;
	std::cout << "Enter k = " << std::endl;
	std::cin >> k;
	std::cout << "hours: " << finding_hours(k) << std::endl;
	std::cout << "minutes: " << finding_minutes(k);
}

int finding_hours(int sec) {
	int answer = sec / 60 / 60;
	return answer;
}

int finding_minutes(int sec) {
	int answer = sec / 60;
	return answer;
}