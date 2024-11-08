#include<stdio.h>
int main(){
    printf("pt có dạng ax+b=0 \n");
    double a;
    scanf("%lf",&a);
    double b;
    scanf("%lf",&b);
    if (a==0&& b==0 ){
        printf("phuong trinh vo so nghiem \n");
    }
    else if (a==0&&b!=0){
        printf("phuong trinh vo so nghiem \n");
    }
    else{
        printf("pt co nghiem = %lf",-b/a);
    }
    return 0;
    
}
