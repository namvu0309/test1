#include <stdio.h>
#include <string.h>
struct sinhVien
{
     char mssv[50];
     char tenSV[50];
     char nganhHoc[50];
     float diemTB;
};
int main()
{
     // BAI1
     printf("\n<<------------------------------->>\n");
     int i;
     int n;
     printf("Moi nhap so luong sinh vien: ");
     scanf("%d", &n);
     struct sinhVien sv1[n];
     for (i = 0; i < n; i++)
     {
          printf("Moi nhap sinh vien thu %d ", (i + 1));
          fflush(stdin);
          printf("MSSV: ");
          gets(sv1[i].mssv);
          fflush(stdin);
          printf("Ten SV: ");
          gets(sv1[i].tenSV);
          fflush(stdin);
          printf("Nganh hoc: ");
          gets(sv1[i].nganhHoc);
          fflush(stdin);
          printf("Diem TB: ");
          scanf("%f", &sv1[i].diemTB);
          fflush(stdin);
     }
     // BAI2
     for (i = 0; i < n; i++)
     {
          for (int j = i + 1; j < n; j++)
          {
               if (sv1[i].diemTB > sv1[j].diemTB)
               {
                    struct sinhVien temp = sv1[i];
                    sv1[i] = sv1[j];
                    sv1[j] = temp;
               }
          }
     }
     // BAI3
     char mssv[50];
     printf("ma so sinh vien ban can tim la ");
     gets(mssv);
     for (i = 0; i < n; i++)
     {
          if (strcmp(mssv, sv1[i].mssv) == 0)
          {
               printf("hien thi ra man hinh thong tin thu: %d\n", i);
               printf("| MSSV: %s\n", sv1[i].mssv);

               printf("| Ho ten: %s\n", sv1[i].tenSV);

               printf("| Nganh hoc: %s\n ", sv1[i].nganhHoc);

               printf("| Diem trung binh: %f\n ", sv1[i].diemTB);
          }
     }
     printf("\n<<------------------------------->>\n");
     printf("====== DANH SACH SINH VIEN ======\n");
     for (i = 0; i < n; i++)
     {
          printf("Thong tin sinh vien thu %d:\n", i);
          printf("| MSSV: %s\n", sv1[i].mssv);

          printf("| Ho ten: %s\n", sv1[i].tenSV);

          printf("| Nganh hoc: %s\n ", sv1[i].nganhHoc);

          printf("| Diem trung binh: %f\n ", sv1[i].diemTB);
     }

     return 0;
}