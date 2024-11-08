#include<stdio.h>
int namNhuan(int x){
    int i=0;
    if (x%400==0){
        i=1;
    }
    if (x%4==0 && x%100!=0){
        i=1;
    }
    return i;
    
}
int main(){
    int nam;
    printf("moi ban nhap so nam cua ban \n");
    scanf("%d",&nam);
    if (namNhuan(nam)==1){
        printf("day la nam nhuan \n");

    }
    else{
        printf("day o phai la nam nhuan \n");
    }
}