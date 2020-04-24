#include <iostream>

long long sum_divisor(int number)
{
    auto result = 1ul;
    for (std::size_t i = 2; i <= std::sqrt(number); ++i) {
        if (number % i == 0 ) {
            auto divisor = number / i; 
            result += (divisor == i) ? i : i + divisor; 
        }
    }
    return result;
}

bool isAbundant(int number) {
    return number < sum_divisor(number);
}

int main()
{
    auto limit = 0;
    std::cout << "Upper Limit\n";
    std::cin >> limit;

    for (std::size_t i = 2; i < limit; ++i) {
        if (isAbundant(i)) {
            std::cout << "number = " << i << ", abundance = " << (sum_divisor(i) - i) << '\n';
        }
    }
    return 0;
}