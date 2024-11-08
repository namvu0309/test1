// lab 2 bài 3


#include<stdio.h>
int main(){
    double Pi=3.14;
    printf("vui long nhap ban kinh cua duong tron ");
    double R;
    scanf("%lf",&R);
    printf("\n chu vi cua hinh tron la ((%lf*2)* %lf=%lf ",Pi,R,Pi*2*R);
    printf("\n dien tich cua hinh tron la %lf*%lf*%lf=%lf ",Pi,R,R,Pi*R*R);
    return 0;
}