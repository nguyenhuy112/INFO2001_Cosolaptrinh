#include <stdio.h>
#define MAX_SIZE 100

void nhapMang(int *arr, int size) {
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < size; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", (arr + i));
    }
}

void inMang(const int *arr, int size) {
    printf("Cac phan tu cua mang la:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}


int timKiem(const int *arr, int size, int key) {
    for (int i = 0; i < size; i++) {
        if (*(arr + i) == key) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int arr[MAX_SIZE];
    int size, key, result;

    printf("Nhap kich thuoc cua mang: ");
    scanf("%d", &size);

    if (size <= 0 || size > MAX_SIZE) {
        printf("Kich thuoc khong hop le. Vui long nhap lai.\n");
        return 1; 
    }

    
    nhapMang(arr, size);

    inMang(arr, size);

    
    printf("Nhap gia tri can tim kiem: ");
    scanf("%d", &key);

    result = timKiem(arr, size, key);

    if (result != -1) {
        printf("Phan tu %d duoc tim thay tai vi tri %d.\n", key, result);
    } else {
        printf("Phan tu %d khong tim thay trong mang.\n", key);
    }

    return 0;
}

