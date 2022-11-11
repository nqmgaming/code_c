#include <stdio.h>
#include <math.h>
int main(){
    //Bài 1 đây nhé


    printf("Bai 1: Kiem tra so chan le");
    printf("\n------------------------\n");
    int cl;
    printf("Hay nhap so can kiem tra: ");
    scanf("%d", &cl);
    if(cl % 2 == 1){
        printf("So %d la so le\n", cl);
    }else{
        printf("So %d la so chan\n", cl);
    }
    printf("\n------------------------\n");

    //Bài 2 ở đây


    printf("Bai 2: Kiem tra so nguyen\n");
    printf("------------------------\n");
    float ip;
    printf("Nhap so can kiem tra: ");
    scanf("%f", &ip);
    if(ip==(int)ip){
        printf("%f la so nguyen\n", ip);
    }else{
        printf("%f ko phai la so nguyen\n", ip);
    }
    printf("\n------------------------\n");


    //Bài 3 chỗ này


    printf("Bai 3: Tinh trung binh mon va xep loai hoc luc\n");
    printf("------------------------\n");
    float toan, van, anh, tbm;
    printf("Nhap diem toan ");
    scanf("%f", &toan);
    printf("Nhap diem van ");
    scanf("%f", &van);
    printf("Nhap diem anh ");
    scanf("%f", &anh);
    tbm = (toan+van+anh)/3;
    printf("Diem trung binh mon cua ban la: %f\n", tbm);
    if (tbm>=9){
        printf("Hoc sinh xuat sac\n");
    }else if (tbm>=8)
    {
        printf("Hoc sinh gioi\n");
    }else if (tbm>=6.5)
    {
        printf("Hoc sinh kha\n");
    }else if (tbm>=5)
    {
        printf("Hoc sinh trung binh\n");
    }else if (tbm<5)
    {
        printf("Hoc sinh kem\n");}
    else{
        printf("Diem khong hop le vui long nhap lai\n");
    }
    printf("\n------------------------\n");

    //Bài 4
    printf("Bai 4: Kiem tra xem co phai canh cua tam giac hay la khong\n");
    printf("------------------------\n");
    int canh1, canh2, canh3;
    printf("Nhap vao canh 1 ");
    scanf("%d", &canh1);
    printf("\nNhap vao canh 2 ");
    scanf("%d", &canh2);
    printf("\nNhap vao canh 3 ");
    scanf("%d", &canh3);
    if(canh1+canh2>canh3 && canh2+canh3>canh1 && canh1+canh3>canh1){
        printf("\nBa canh la canh cua tam giac\n");
    }else{
        printf("\nBa canhko phai la canh cua tam giac\n");
    }
    printf("\n------------------------\n");

    //Bài 5


    printf("Bai 5: Phuong trinh bac hai\n");
    printf("------------------------\n");
    float delta, a, b, c, x1, x2;
    printf("Nhap vao he so a b c cua phuong trinh bac 2: ");
    scanf("%f %f %f", &a, &b, &c);
    delta = pow(b, 2) - 4*a*c;
    if (a==0 && b==0)
    {
        printf("Phuong trinh vo nghiem\n");
    }else if (delta==0)
    {
       printf("Phuong trinh co mot nghiem duy nhat: %2f\n", -c/b);
    }else if (delta<0)
    {
        printf("Phuong trinh vo nghiem\n");
    }else if (delta>0)
    {
        printf("Phuong trinh co hai nghiem phan biet x1 va x2: ");
        x1=(-b+sqrt(delta))/(2*a);
        x1=(-b-sqrt(delta))/(2*a);
        printf("%2f va %2f", x1, x2);
    }
    printf("\n------------------------\n");

    //Bài 6


    printf("Bai 6: Tinh muc hoa hong dat duoc\n");
    printf("------------------------\n");
    int dt, hh;
    printf("Nhap vao doanh thu cua cua hang ban(trieu): ");
    scanf("%d", &dt);
    if (dt<=100)
    {
        hh=dt*0.05;
        printf("Muc hoa hong cua ban la 5 phan tram: %d trieu\n", hh);
    }else if(dt<=200)
    {
        hh=dt*0.1;
        printf("Muc hoa hong cua ban la 5 phan tram: %d trieu\n", hh);
    }else if(dt>=300)
    {
        hh=dt*0.15;
        printf("Muc hoa hong cua ban la 5 phan tram: %d trieu\n", hh);
    }
    printf("\n------------------------\n");

    //Bài 7


    printf("Bai 7: So sanh ba so a, b , c\n");
    printf("------------------------\n");
    float x, y, z;
    printf("Nhap vao ba so x, y, z can so sanh: ");
    scanf("%f %f %f", &x, &y, &z);
    if (x<y && x<z)
    {
        printf("%f la so nho nhat", x);
    }else if (y<x && y<z)
    {
        printf("%f la so nho nhat", y);
    }else if (z>x && z>y)
    {
        printf("%f la so nho nhat", z);
    }else if (a==b==c)
    {
        printf("So nho nhat la: %f", a);
    }
    
    printf("\n------------------------\n");

    //Bài 8


    printf("Bai 8: So tien dien phai tra\n");
    printf("------------------------\n");
    float d, tien;
    printf("So dien tieu thu trong thang nay cua ban la: ");
    scanf("%f", &d);
    if (d>0&&d<=50){
        tien = 1.678*d;
        printf("so tien ban phai tra thang: %2f dong\n", tien);
    }else if (d>51&&d<=100)
    {
        tien = 1.734*d;
        printf("so tien ban phai tra thang: %2f dong\n", tien);
    }else if (d>101&&d<=200)
    {
        tien = 2.014*d;
        printf("so tien ban phai tra thang: %2f dong\n", tien);
    }else if (d>201&&d<=300)
    {
        tien = 2.834*d;
        printf("so tien ban phai tra thang: %f\n", tien);  
    }else if (d>=401)
    {
        tien = 2.927*d;
        printf("so tien ban phai tra thang: %f\n", tien);  
    }
       
    return 0;
}

//Không chạy được thì chịu haha