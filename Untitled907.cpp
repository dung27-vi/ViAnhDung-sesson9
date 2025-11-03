#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int n, i, j;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int a;
    for (i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
    
    }

    i = 0;
    j = n - 1;
    while (i < j) {
    
        i++;
        j--;
    }

    printf("Mang sau khi dao nguoc: ");
    for (i = 0; i < n; i++) {
        
    }
    printf("\n");
    return 0;
}
