#include <stdio.h>
void laiSuat(int tienVay)
{
     int nam = 1;
     int tienLai;                 // tien Lai hang thang
     int tienGoc = tienVay / 288; // tien goc phai tra hàng tháng 24 năm int tienTra;//tien phai tra hang thang = tien goc + tien Lai
     int tienCon=tienVay;                 // tien con lai sau khi tra tien goc tienCon tienVay;
     printf("Ky han | Lai phai tra | Goc phai tra | So tien phai tra | So tien con lai | \n");
     for (int i = 1; i <= 288; i++)
     {
          tienLai = tienCon * 0.06; // 6%
          int tienTra = tienGoc + tienLai;
          tienCon = tienCon - tienGoc;
          printf("  ---------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
          printf("%6d | ", i);
          printf("%12d | ", tienLai);
          printf("%12d |", tienGoc);
          printf("%16d |", tienTra);
          printf("%15d |", tienCon);
          if (i % 12 == 0)
          {
               nam++;
               printf("\n");
               printf("//======= ===========Ket thuc %d nam ===========\n", nam);
               printf("\n");
          }
     }
}
int main()
{

     printf("Chuong trinh tra gop mua xe \n");
     int tienXe = 500000; // k
     int tienVay = 0;
     int tienTraTruoc = 0;
     tienTraTruoc = tienXe * 0.2;
     tienVay = tienXe * 0.8;
     if (tienVay > 500000)
     {
          tienVay = 500000;
          tienTraTruoc = tienXe - tienVay;
          laiSuat(tienVay);
          printf("So tien vay cua ban vuot han mục quy dinh \n");
          printf("Tien tra truoc: %d \n", tienTraTruoc);
          printf("Tien vay: %d\n", tienVay);
     }
     else
     {
          laiSuat(tienVay);
          printf("So tien vay cua ban vuot han muc quy dinh \n");
          printf("So tien vay cua ban vuot han mục quy dinh \n");
          printf("Tien tra truoc: %d \n", tienTraTruoc);
          printf("Tien vay: %d\n", tienVay);
     }
}
