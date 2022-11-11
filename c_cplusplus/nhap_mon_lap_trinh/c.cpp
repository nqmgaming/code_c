#include <cstdlib>
#include <iostream>
#include<iomanip>

using namespace std;

int main(int argc, char *argv[])
{
   float x;
   float y;
   float z;
   float trungbinh;
   cout<<"Nhap ba diem (diem kiem tra, diem giua ky va diem cuoi ky) tuong ung la:";
   cin>>x>>y>>z;
   trungbinh=(x+y+z)/3;

   if(trungbinh>=9.0)cout<<"Hang A";
   else if((trungbinh>=7.0) && (trungbinh<90)) cout<<"Hang B";
   else if((trungbinh>=5.0) && (trungbinh<70))cout<<"Hang C";
   else if(trungbinh<5.0) cout<<"Hang F";
   else cout<<"Khong hop le";

   cout<<"\n";

   return 0;
}
