#include "../headers/cli_test.h"

int add(int a, int b) {
	return a + b;
}
int subtract(int a, int b) {
	return a - b;
}
double divide(int a, int b) {
	if (b == 0) {
		throw std::invalid_argument("Делить на 0 нельзя!");
	}
	return static_cast<double>(a) / b;
}