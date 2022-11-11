#include <stdio.h>
#include <math.h>
int main(){
    int menu;
    printf("Vui long lua chon bai ban muon chay\n1. Bai 1: Xep loai hoc luc \n2. Bai 2: In ra cac so tu 10->0 \n3. Bai 3: In ra cac so chan tu 0->10 \n4. Bai 4: In ra cac so le tu 0-10 \n0. Thoat chuong trinh \n ---------------------------------\nLua chon cua ban: ");
    scanf("%d", &menu);
    switch (menu)
    {
    case 1:
         int i;
         for ( i = 10; i >=0; i--)
         {
            printf(" %d ", i);
         }
         
        
    default:
        printf(" Vui long nhap lai so");
        break;
    }

}
