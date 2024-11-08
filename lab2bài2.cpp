// lab 2 bài 2


#include <stdio.h>
int main(){
    printf("nhap vao chieudai \n ");
    double chieuDai;
    scanf("%lf",&chieuDai);
    printf("nhap vao chiẻurong \n ");
    double chieuRong;
    scanf("%lf",&chieuRong);
    double chuVi=((chieuDai+chieuRong)/2);
    double dienTich=(chieuDai*chieuRong);
    printf("dien tich va chu vi cua hinh chu nhat la %lf,%lf",chuVi,dienTich);
    return 0;
    
}