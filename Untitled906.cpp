#include <iostream>
#include <vector>

int main() {
    int n, x;
    std::cout << "Nhap so luong phan tu cua mang: ";
    std::cin >> n;

    std::vector<int> arr(n);
    std::cout << "Nhap cac phan tu cua mang: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    std::cout << "Nhap gia tri can tim x: ";
    std::cin >> x;

    bool found = false;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == x) {
            std::cout << "Phan tu " << x << " duoc tim thay tai vi tri thu " << i << std::endl;
            found = true;
            break; 
        }
    }

    if (!found) {
        std::cout << "Khong tim thay phan tu " << x << " trong mang." << std::endl;
    }

    return 0;
}
