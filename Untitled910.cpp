#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[] = {1, 5, 2, 3, 23, 5, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max_val = 0;
    
    // Tim gia tri lon nhat trong mang de xac dinh kich thuoc mang dem
    for (int i = 0; i < n; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }
    
    int count[max_val + 1];
    for (int i = 0; i <= max_val; i++) {
        count[i] = 0;
    }
    
    // Ðem so lan xuat hien cua moi phan tu
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }
    
    // Tim so lon xuat hien lon nhat
    int max_count = 0;
    for (int i = 0; i <= max_val; i++) {
        if (count[i] > max_count) {
            max_count = count[i];
        }
    }
    
    // In ra cac phan tu co so lan xuat hien lon nhat
    printf("Cac phan tu co so lan xuat hien lon nhat la: ");
    for (int i = 0; i <= max_val; i++) {
        if (count[i] == max_count && count[i] != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    
    return 0;
}
