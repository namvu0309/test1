#include <stdio.h>

    struct sinhVien
    {
     char mssv[10];
     char tenSinhVien[20];
     char nganhHoc[40];
     float diemTB;
    };
    
int main(){
    int i,n;
    printf("Nhap so sinh vien muon them:");
    scanf("%d",&n);
    struct sinhVien nhomSV[n];
    for(i=0;i<n;i++){
        printf("\nNhap ma sinh vien:");
        int c;
        while(c=getchar()!='\n'&& c!=EOF);
        gets(nhomSV[i].mssv);
        printf("\nNhap ten sinh vien:");
       
        gets(nhomSV[i].tenSinhVien);
        printf("\nNhap ten nganh hoc:");
       
        gets(nhomSV[i].nganhHoc);
        printf("\nNhap diem trung binh:");
        
        scanf("%f",&nhomSV[i].diemTB);
        struct sinhVien nhomSV[n];
        
        for(i=0;i<n;i++){
            printf("\nMa so sinh vien:%s",nhomSV[i].mssv);
            printf("\nTen sinh vien:%s",nhomSV[i].tenSinhVien);
            printf("\nTen nganh hoc:%s",nhomSV[i].nganhHoc);
            printf("\nDiem trung binh:%f",nhomSV[i].diemTB);
        }
    }
}