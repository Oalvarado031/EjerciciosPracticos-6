#include <iostream>

int main() {
    int n, sum = 0;
    std::cout << "Enter a natural number: ";
    std::cin >> n;
    int i = 1;
    while (i <= n) {
        sum += i;
        i++;
    }
    std::cout << "The sum of natural numbers from 1 to " << n << " is " << sum << std::endl;
    return 0;
}
