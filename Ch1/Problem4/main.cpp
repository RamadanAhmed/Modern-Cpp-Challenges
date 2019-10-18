#include <iostream>
#include <numeric>
#include <algorithm>

bool isPrime(int const n) {
	if (n <= 1) {
		return false;
	}
	else {
		for (size_t i = 2; i < n; i++) { if (n % i == 0) { return false; } }				
		return true;
	}
}

int main() {
	int number;
	std::cin >> number;
	long long prime = 2
	for (size_t i = number; i > 0; --i) {
		if (isPrime(i)) {
			std::cout << "Largest Prime number = " << i << '\n';
		}
	}
}