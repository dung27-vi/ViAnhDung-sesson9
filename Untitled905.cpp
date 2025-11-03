#include <stdio.h>

int main() {
    int n, i;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int arr;
    for (i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        
    }
    int count_even = 0;
    int count_odd = 0;
    printf("Cac so chan trong mang la: ");
    for (i = 0; i < n; i++) {
        {
        
            count_even++;
        }
    }
    printf("\nCac so le trong mang la: ");
    for (i = 0; i < n; i++) {
        {
    
            count_odd++;
        }
    }
    printf("\nTong so chan = %d", count_even);
    printf("\nTong so le = %d", count_odd);
    return 0;
}
