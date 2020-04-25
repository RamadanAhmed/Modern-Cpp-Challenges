#include <iostream>
#include <vector>

std::vector<std::uint64_t> getDigits(std::uint64_t number)
{
    std::vector<std::uint64_t> vec;
    while (number != 0) {
        vec.emplace_back(number % 10);
        number /= 10;
    }
    return vec;
}

bool isArmstrongNumber(std::uint64_t number)
{
    auto result = 0ul;
    auto digits = getDigits(number);
    auto power = digits.size();
    for (auto& digit : digits) {
        result += std::pow(digit, power);
    }
    if (result == number)
        return true;
    else
        return false;
}


int main() {
    std::cout << "Upper Limit\n";
    std::uint64_t limit;
    std::cin >> limit;
    for (std::size_t i = 1; i < limit; ++i) {
        if (isArmstrongNumber(i)) {
            std::cout << "Armstrong Number is " << i << '\n'; 
        }
    }
}