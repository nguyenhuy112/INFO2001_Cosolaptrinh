#include <stdio.h>
#include <stdlib.h>

struct Book {
    char ten[50];
    char tacGia[50];
    float gia;
};

void nhapThongTinSach(struct Book *sach) {
    getchar();
    printf("Nhap ten sach: ");
    fgets(sach->ten, 50, stdin);
    printf("Nhap tac gia: ");
    fgets(sach->tacGia, 50, stdin);
    printf("Nhap gia sach: ");
    scanf("%f", &sach->gia);
}
void hienThiThongTinSach(struct Book *sach) {
    printf("Ten sach: %s\n", sach->ten);
    printf("Tac gia: %s\n", sach->tacGia);
    printf("Gia sach: %.2f\n", sach->gia);
}

int main() {
    int n; 
    printf("Nhap so luong sach: ");
    scanf("%d", &n);
    struct Book *dsSach = (struct Book *)malloc(n * sizeof(struct Book));

    if (dsSach == NULL) {
        printf("Loi! Khong the cap phat bo nho.");
        return 1; 
    }

    for (int i = 0; i < n; i++) {
        printf("\nNhap thong tin cho sach %d:\n", i + 1);
        
        nhapThongTinSach(&dsSach[i]);
    }
	printf ("Danh sach sach da nhap:\n");
    for (int i = 0; i < n; i++) {	
    printf("\nThong tin sach %d:\n", i + 1);
        hienThiThongTinSach(&dsSach[i]);
    }
    free(dsSach);

    return 0; 
}

