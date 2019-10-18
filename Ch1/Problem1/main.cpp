#include <iostream>
#include <numeric>
#include <algorithm>

/*
 * Write a program that calculates and prints the sum of all the natural numbers divisible by
 * either 3 or 5, up to a given limit entered by the user
*/
int main() {
	int number;
	std::cin >> number;
	long long sum = 0;
	for (int i = 0; i < number; ++i) {
		if (i % 3 == 0 || i % 5 == 0) {
			sum += i;
		}
	}
	std::cout << sum << '\n';
}