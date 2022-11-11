#include <stdio.h>
#include <math.h>
int main(){
    char diem;
    printf("Nhap diem cua ban \n");
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
    case 'F':
        printf("Yeu");
        break;
    default:
        printf("Nhap lai");
        break;
    }
    return 0;
}