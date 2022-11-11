#include <stdio.h>
#include <math.h>
int main(){
    int menu;
    printf("Vui long lua chon bai ban muon chay\n1. Bai 1: Xep loai hoc luc \n2. Bai 2: \n3. Bai 3: \n4. Bai 4: \n0. Thoat chuong trinh \n ---------------------------------\nLua chon cua ban: ");
    scanf("%d", &menu);
    switch (menu)
    {
    case 1:
        printf("Bai 1");
        char diem;
        printf("Nhap diem cua ban\n");
        scanf("%s", &diem);
        switch (diem)
        {
        case 'A':
            printf("Xuat sac");
            break;
        case 'B':
             printf("Gioi");
             break;
        case 'C':
             printf("Kha");
             break;
        case 'D':
             printf("TB");
             break;
        case 'E':
             printf("Kem");
             break;
        default:
            printf("Nhap lai");
            break;
        }
        break;
        case 2:
             printf("Bai 2\n");
             int a, b,tong;
             printf("Vui long nhap hai so a va b\n");
             scanf("%d %d", &a, &b);
             tong = a +b;
             printf("Tong la: %d", tong);
             return 0;
        case 0:
             printf("Tam biet");
             exit(0);
             break;

    default:
        printf(" Vui long nhap lai so");
        break;
    }

}
