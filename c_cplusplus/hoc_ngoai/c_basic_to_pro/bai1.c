//nhap vao hai so nguyen in ra tong, hieu, tich, thuong
#include <stdio.h>
int main(){
    float a, b;
    printf("Nhap vao hai so a va b ");
    scanf("%f %f", &a, &b);
    printf(" Tong cua hai so %f va %f la: %2.f\n", a, b, a+b);
    printf(" Hieu cua hai so %f va %f la: %2.f\n", a, b, a-b);
    printf(" Tich cua hai so %f va %f la: %2.f\n", a, b, a*b);
    printf(" Thuong cua hai so %f va %f la: %.21f\n", a, b, a/b);
    return 0;
}
