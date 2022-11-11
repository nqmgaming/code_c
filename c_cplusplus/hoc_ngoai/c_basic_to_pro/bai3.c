#include <stdio.h>
#include <math.h>
int main (){
    float x1, y1, x2, y2, dodai;
    printf("Hay nhap tao do diem A\n");
    scanf("%f %f", &x1, &y1);
    printf("Hay nhap tao do diem B\n");
    scanf("%f %f", &x2, &y2);
    dodai = sqrt(pow(x1-x2, 2)+pow(y1 - y2, 2));
    printf("Khoang cach giua hai diem A va B la: %2.f", dodai);
    return 0;

}