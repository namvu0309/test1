#include <stdio.h>
int main()
{
    int n;
    printf("moi ban nhap so phan tu cua mạng \n");
    scanf("%d", &n);
    int mang[n];
    for (int i = 1; i <= n; i++)
    {
        printf("nhap phan tu thu %d \n", i+1);
        scanf("%d", &mang[i]);
    }
    float tong = 0;
    float trungBinh;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (mang[i] % 3 == 0)
        {
            tong = tong + mang[i];
            count++;
        }
    }
    trungBinh = tong / count;

    printf("ket qua cua trung binh cac tong chia het cho 3 la %.2f \n", trungBinh);
}