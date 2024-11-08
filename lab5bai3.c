#include<stdio.h>
void hoanvi(int *a,int *b){
    int temp=*a;
     //i đc gán bằng 500
    *a=*b; // 500 lại đc gán bằng 900
    *b=temp; //900 đc gán bằng 500
}
int main(){
    int so1,so2;
    printf("moi ban nhap 2 so can hoan vi \n");
    scanf("%d%d",&so1,&so2);
    
    hoanvi(&so1,&so2);
    printf("%d %d",so1,so2);
}