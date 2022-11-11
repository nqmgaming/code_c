//bai1
#include <stdio.h>
#include <math.h>
int main(){
    printf("Bai 8\n");
    printf("------------------------\n");
    float d, tien;
    printf("So dien tieu thu trong thang nay cua ban la: ");
    scanf("%f", &d);
    if (d>0&&d<=50)
    {
        tien = 1.678*d;
        printf("so tien ban phai tra thang: %f", tien);
    }else if (d>51&&d<=100)
    {
        tien = 1.734*d;
        printf("so tien ban phai tra thang: %f", tien);
    }else if (d>101&&d<=200)
    {
        tien = 2.014*d;
        printf("so tien ban phai tra thang: %f", tien);
    }else if (d>201&&d<=300)
    {
        tien = 2.834*d;
        printf("so tien ban phai tra thang: %f", tien);
    }else if (d>=401)
    {
        tien = 2.927*d;
        printf("so tien ban phai tra thang: %f", tien);
    }

    return 0;
}
