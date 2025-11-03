#include <iostream>

// Ham kiem tra so nguyen tu
bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    int sum = 0;
    std::cout << "Nhap so phan tu cua mang: ";
    std::cin >> n;
    int arr;
    for (int i = 0; i < n; i++) {
        std::cout << "Nhap phan tu thu " << i + 1 << ": ";

        if (isPrime(arr)) {
        
        }
    }
    std::cout << "Tong cac so nguyen to = " << sum << std::endl;
    return 0;
}
