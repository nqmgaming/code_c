
//Nhập vào một số rồi in số đó ra màn hình xem số đó là số âm hay dương

#include <stdio.h>
#include <math.h>
// int main(){
//     int a, b;
    
//     printf("hay nhap so a=");
//     scanf("%d", &a);
//     if (a>0){
//        printf("%d la so duong\n", a);
//     }else if (a==0)
//     {
//         printf("a la so khong");
//     }else{
//         printf("%d la so am\n", a);
    
//     }
// }


//bai 2

int main(){
    int a;
    
    printf("Hay nhap so can kiem tra ");


    scanf("%d", &a);
    if(a % 2==0){
        printf("%d la so chan\n", a);
    }
    else
    {
        printf("%d la so le\n", a);
    }
    return 0;
}