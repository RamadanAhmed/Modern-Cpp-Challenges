#include <algorithm>
#include <iostream>
#include <vector>

bool isPrime(int number)
{
    if (number <= 3)
        return number > 1;
    else if (number % 2 == 0 || number % 3 == 0) {
        return false;
    } else {
        for (int i = 5; i * i <= number; i += 6) {
            if (number % i == 0)
                return false;
        }
        return true;
    }
}

int main()
{
    unsigned long long limit = 0;
    std::cin >> limit;
    std::cout << "Sexy Prime Numbers are \n";
    for (int i = 2; i < limit; i++) {
        if (isPrime(i) && isPrime(i + 6)) {
            std::cout << i << ',' << (i + 6);
        }
    }
}