// lab 2 bài 4


#include<stdio.h>
int main(){
    double diemToan;
    double diemLy;
    double diemHoa;
    printf("nhap diem mon toan \n");
    scanf("%lf",&diemToan);
    printf("nhap diem mon ly \n");
    scanf("%lf",&diemLy);
    printf("nhap diem mon hoa \n");
    scanf("%lf",&diemHoa);
    printf("diem trung binh cua ban la ((%lf*3)+(%lf*2)+%lf)/6=%lf \n",diemToan,diemLy,diemHoa,((diemToan*3)+(diemLy*2)+diemHoa)/6 );
    return 0;
}