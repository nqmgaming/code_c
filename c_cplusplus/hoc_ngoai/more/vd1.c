//Kiem tra nam nhuan: chia het cho 400, hoac chia het cho 4 nhung ko chia het cho 100
#include <stdio.h>
#include <math.h>
int main(){
    int sn;
    printf("Hay nhap so ngay trong nam do: ");
    scanf("%d", &sn);
    if ((sn % 400 == 0) || (sn % 4 == 0 && sn % 100 !=0))
    {
       printf("---------------------------\n");
       printf("Nam nhuan!");
    }else{
        printf("Khong phai nam nhuan!");
    }
    return 0;
}