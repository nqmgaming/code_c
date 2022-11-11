#include <stdio.h>
#include <math.h>
int main(){
    float tb;
    printf("Hay nhap vao diem trung binh cua ban ");
    scanf("%f", &tb);
    if(tb>=9){
        printf("Hang xuat sac\n");
    }else if (tb>=8)
    {
        printf("Hang gioi\n");
    }else if (tb>=6.5)
    {
        printf("Hang Kha\n");
    }else if (tb>=5)
    {
        printf("Hang Trung Binh\n");
    }
    else if (tb<5)
    {
        printf("Nhap lai");
    }
    else if(tb>10 && tb<0){
        printf("nhap lai");
    }
    
    
    return 0;
    
    
}