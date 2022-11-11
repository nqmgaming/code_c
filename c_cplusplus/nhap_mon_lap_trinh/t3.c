#include <stdio.h>
#include <math.h>
//Nhập vào ba cạnh a, b, c của tam giác kiểm tra xem ba cạnh đó có lập thành một tam giác hay không
int main(){
    int a,b,c;
    printf("Nhap vao canh a ");
    scanf("%d", &a);
    printf("\nNhap vao canh b ");
    scanf("%d", &b);
    printf("\nNhap vao so c ");
    scanf("%d", &c);
    if(a+b>c && a+c>b && b+c>a){
        printf("\ntam giac");
    }else{
        printf("\nko phai la tam giac");
    }
}