#include <iostream>

std::uint64_t sum_divisor(int number) {
    auto result = 1ul;
    for (std::size_t i = 2; i <= std::sqrt(number); ++i) {
        if (number % i == 0) {
            auto divisor = number / i;
            result += (number == i) ? i : divisor + i;
        }
    }
    return result;
}

auto Amicable(int number) -> std::int64_t
{
    auto second_number = sum_divisor(number); 
    return sum_divisor(second_number) == number && number < second_number? second_number : -1;
}

int main() {
    std::cout << "Upper Limit \n";
    auto limit = 0ul;
    std::cin >> limit;
    for (std::size_t i = 4; i < limit; ++i) {
        auto result = Amicable(i);
        if (result != -1) {
            std::cout << "number " << i << " & " << result << " are amicable\n"; 
        }
    }
    return 0;
}