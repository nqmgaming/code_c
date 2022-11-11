#include <stdio.h>
#include <math.h>
int main(){
    unsigned int C;
    float F;
    printf("Nhap vao do C");
    scanf("%u", &C);
    F = (C*9/5)+32;
    printf("Do F sau khi chuyen tu do C la: %2f", F);
    return 0;

}