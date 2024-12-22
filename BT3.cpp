#include <stdio.h>

int main() {
    int array[100];
    int n, deleteIndex;

    printf("So phan tu can nhap: ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("So phan tu khong hop le.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Hay nhap phan tu array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    printf("Nhap vi tri can xoa: ");
    scanf("%d", &deleteIndex);

    if (deleteIndex < 0 || deleteIndex >= n) {
        printf("Vi tri khong hop le.\n");
    } else {
        for (int i = deleteIndex; i < n - 1; i++) {
            array[i] = array[i + 1];
        }
        n--; 

        printf("Mang sau khi xoa:\n");
        for (int i = 0; i < n; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");
    }

    return 0;
}

