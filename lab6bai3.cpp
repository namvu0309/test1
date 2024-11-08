#include <stdio.h>
//dùng hàm hoán vị đã làm ở lab 5 

void hoanDoi(int *so1, int *so2) // lấy hàm void để tý gọi nó ra xắp xếp hộ
{
    int hoanVi;
    hoanVi = *so1;
    *so1 = *so2;
    *so2 = hoanVi;
}

int main()
{
   
        int n;
        printf("moi ban nhap so luong mang mong muon: \n");
        scanf("%d", &n); // nhập số phần tử trong mảng 
        int mang[n]; // khai báo giá trị mảng mang kiểu nguyên
        for (int i = 0; i < n; i++) //cho i chạy từ 0 đến số phần tử trong
        {
            printf("moi ban nhap gia tri cua mang vi tri %d: ", (i+1));
            scanf("%d", &mang[i]);
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (mang[i] < mang[j])
                {
                    hoanDoi(&mang[i], &mang[j]);
                }
            }
        }

        printf("gia tri sau khi sap xep giam dan la:");
        for (int i = 0; i < n; i++)
        {
            printf("\n Vi tri thu mang[%d] la : %d ", i, mang[i]);
        }
        printf("\n");
 
}