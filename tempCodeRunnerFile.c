#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int chon;
    do
    {
        printf("------------------MENU-------------------\n");
        printf("1.Trung binh tong cac so chia het cho 3 trong mang.\n");
        printf("2.Tim max , min trong mang.\n");
        printf("3.Sap xep mang theo thu tu giam dan.\n");
        printf("4.Thoat!\n");

        printf("Moi ban chon chuc nang: ");
        scanf("%d", &chon);

        switch (chon)
        {
        case 1:
        {
            printf("Trung binh tong cac so chia het cho 3 trong mang.\n");
            int n, i;
            float trungbinh, tong;
            int count = 0;

            printf("Moi nhap vao phan tu mang: ");
            scanf("%d", &n);

            int mang[n];

            for (i = 0; i < n; i++)
            {
                printf("NHap gia tri phan tu thu: [%d]", i + 1);
                scanf("%d", &mang[i]);
            }
            for (i = 0; i < n; i++)
            {
                printf("\nGia tri phan tu thu [%d]: la [%d]", i + 1, mang[i]);
            }
            for (i = 0; i < n; i++)
            {
                if (mang[i] % 3 == 0)
                {
                    tong += mang[i];
                    count++;
                }
            }
            trungbinh = tong / count;
            printf("\nTrung binh tong cac so chia het cho 3 la: %2.f", trungbinh);
            break;
        }
        case 2:
        {
            printf("Tim max min trong mang.\n");
            int i, n;
            printf("Moi nhap vao so phan tu mang: ");
            scanf("%d", &n);
            int mang[n];

            for (i = 0; i < n; i++)
            {
                printf("NHap gia tri phan tu thu: [%d]", i + 1);
                scanf("%d", &mang[i]);
            }
            int min = mang[0], max = mang[0];
            for (i = 0; i < n; i++)
            {
                if (mang[i] > max)
                {
                    max = mang[i];
                }
                if (mang[i] < min)
                {
                    min = mang[i];
                }
            }
            printf("\n Max la: %d", max);
            printf("\n Min la: %d", min);
            break;
        }
        case 3:
        {
            printf("Sap xep mang theo thu tu giam dan.\n");
            int n;
            printf("Moi nhap vao so phan tu mang: ");
            scanf("%d", &n);

            int mang[n];
            int i;

            for (int i = 0; i < n; i++)
            {
                printf("Gia tri cua phan tu [%d]: ", i + 1);
                scanf("%d", &mang[i]);
            }
            for (i = 0; i < n - 1; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    if (mang[i] < mang[j])
                    {
                        int temp = mang[i];
                        mang[i] = mang[j];
                        mang[j] = temp;
                    }
                }
            }
            printf("Mang sau khi sap xep giam dan: \n");
            for (int i = 0; i < n; i++)
            {
                printf("Vi tri thu mang[%d] la: %d\n", i + 1, mang[i]);
            }
            printf("\n--------------------------");
            break;
        }
        case 4:
        {
            printf("THOAT!\n");
            exit(0);
            break;
        }
        default:
            printf("Khong co chuong trinh nay moi ban chon lai.\n");
        }
    } while (1);
    return 0;
}