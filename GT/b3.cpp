#include <iostream>
#include <unordered_map>
std::unordered_map<long long, long long> fib;

long long fibonacci(long long n) {
    if (fib.find(n) != fib.end()) 
        return fib[n];
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    if (n % 2 == 0) {
        long long k = n / 2;
        fib[n] = fibonacci(k);
        return fib[n];
    }

    long long k = (n - 1) / 2;
    fib[n] = fibonacci(k) + fibonacci(k + 1);
    return fib[n];
}
int main() {
    long long n;
    std::cin >> n;
    std::cout << fibonacci(n) << std::endl;
    return 0;
}
