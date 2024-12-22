#include <stdio.h>

int main() {
    int array[100];
    int n, currentLength, replaceIndex, newValue;

    printf("So phan tu can nhap: ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("So phan tu khong hop le.\n");
        return 1;
    }

    currentLength = n;

    for (int i = 0; i < n; i++) {
        printf("Hay nhap phan tu array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    printf("Nhap vi tri can sua: ");
    scanf("%d", &replaceIndex);

    if (replaceIndex >= currentLength || replaceIndex < 0) {
        printf("Vi tri khong hop le.\n");
    } else {
        printf("Nhap phan tu moi cho array[%d]: ", replaceIndex);
        scanf("%d", &newValue);

        array[replaceIndex] = newValue;

        printf("Mang sau khi sua la :\n");
        for (int i = 0; i < currentLength; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");
    }

    return 0;
}

