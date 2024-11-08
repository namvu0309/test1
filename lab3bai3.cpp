#include <stdio.h>
int main(){
    float soDien, tienDien;
    int bac1=1678, bac2=1734, bac3=2014, bac4=2536, bac5=2834, bac6=2927;
    printf("Nhap vao so dien cua ban (kWh): ");
    scanf("%f",&soDien);
    if(soDien<0){
        printf("\nVui long nhap lai So Dien\nSo dien khong duoc nho hon 0\n");
    }
    else if(soDien<=50){
        tienDien=soDien*bac1;
        printf("\nban da dung dien trong khoang 0 - 50 kWh so tien ban phai tra la: %f",tienDien);
    }
    else if(soDien<=100){
        tienDien=50*bac1+((soDien-50)*bac2);
        printf("\nban da dung dien trong khoang 51 - 100 kWh so tien ban phai tra la: %f",tienDien);
    }
    else if(soDien<=200){
        tienDien=50*bac1+(50*bac2)+((soDien-100)*bac3);
        printf("\nban da dung dien trong khoang 101 - 200 kWh so tien ban phai tra la: %f",tienDien);
    }
    else if(soDien<=300){
        tienDien=50*bac1+(50*bac2)+(100*bac3)+((soDien-200)*bac4);
        printf("\nban da dung dien trong khoang 201 - 300 kWh so tien ban phai tra la: %f",tienDien);
    
    }
    else if(soDien<=400){
        tienDien=50*bac1+(50*bac2)+(100*bac3)+(100*bac4)+((soDien-300)*bac5);
        printf("\nban da dung dien trong khoang 301 - 400 kWh so tien ban phai tra la: %.2f",tienDien);
    }
    else if(soDien>400){
        tienDien=50*bac1+(50*bac2)+(100*bac3)+(100*bac4)+(100*bac5)+((soDien-400)*bac6);
        printf("\nban da dung dien tren 400 kWh so tien ban phai tra la: %ff",tienDien);
    }
    return 0;
}