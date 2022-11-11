#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, tbm;
    printf("Nhap diem toan ");
    scanf("%f", &a);
    printf("Nhap diem van ");
    scanf("%f", &b);
    printf("Nhap diem anh ");
    scanf("%f", &c);
    tbm = (a+b+c)/3;
    // printf("Diem trung binh mon cua ban la: %2.f\n", tbm);
   if (tbm>=9){
        printf("Hoc sinh xuat sac");
    }else if (tbm>=8)
    {
        printf("Hoc sinh gioi");
    }else if (tbm>=6.5)
    {
        printf("Hoc sinh kha");
    }else if (tbm>=5)
    {
        printf("Hoc sinh trung binh");
    }else if (tbm<5)
    {
        printf("Hoc sinh kem");}
    else{
        printf("Diem khong hop le vui long nhap lai\n");
    }
    return 0;   
}