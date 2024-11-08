#include <stdio.h>
int main(){
    printf("Ban hay nhap diem");
    double diem;
    scanf("%lf",&diem);
    if( 9 <= diem && diem <=10){
        printf(" Ban da dat hoc sinh xuat sac");
    }
    else if (8 <= diem ){
        printf("Ban da dat hoc sinh gioi");
    }
    else if( 7<= diem){
        printf("Ban da dat hoc sinh kha");
    }
    else if(5<= diem){
        printf("Ban da dat hoc sinh trung binh");

    }
    else{
        printf("Ban da dat hoc sinh yeu");
    }
    return 0;
}