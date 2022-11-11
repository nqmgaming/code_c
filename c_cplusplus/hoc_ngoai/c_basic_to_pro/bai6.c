#include <stdio.h>
#include <math.h>
int main(){
    float a, b;
    printf("Nhap co so ");
    scanf("%f", &a);
    printf("Nhap luy thua ");
    scanf("%f", &b);
    printf("kq la: %2.f", pow(a, b));
    return 0;
}