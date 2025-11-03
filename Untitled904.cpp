#include <stdio.h>

int main() {
    int n, i, tong = 0;
    float trung_binh;
    
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    
    int a;
    
    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
        tong += a[i];
    }
    
    trung_binh = (float)tong / n;
    
    printf("Gia tri trung binh cua cac phan tu trong mang la: %.2f", trung_binh);
    
    return 0;
}
