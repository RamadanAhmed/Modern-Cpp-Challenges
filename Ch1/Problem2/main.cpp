#include <iostream>
#include <numeric>
#include <algorithm>

int main() {
	int number1, number2;
	std::cin >> number1;
	std::cin >> number2;
	long long gcd_result = std::gcd(number1, number2);
	std::cout << gcd_result << '\n';
}