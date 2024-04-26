#include <iostream>

void printNumber(int number) {
	std::cout << "This prints the integer " << number << std::endl;
}

void printNumber(float number) {
	std::cout << "This prints the decimal " << number << std::endl;
}

int main() {
	int integer = 101;
	float decimal = 3.14;

	printNumber(integer);
	printNumber(decimal);
}