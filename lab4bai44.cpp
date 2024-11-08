#include <stdio.h>
void bai1()
{
    float tong = 0;
    float bienDem = 0;
    float trungBinh = 0;
    int min, max;

    printf("vui long nhap min va max \n");
    scanf("%d", &min);
    scanf("%d", &max);
    int u = min;
    while (u <= max)
    {
        if (u % 2 == 0)
        {
            tong = tong + u;
            bienDem = bienDem + 1;
        }
        u++;
    }
    trungBinh = tong / bienDem;
    printf("trung binh tong cua 2 so tu nhien chia het cho 2 la %.2f", trungBinh);
}
void bai2()
{
    int so;
    int count = 0;
    int i;
    printf("vui long nhap so cua ban \n ");
    scanf("%d", &so);
    for (i = 2; i < so; i++)
    {
        if (so % i == 0)
        {
            count++;
        }
    }
    if (count == 0)
    {
        printf(" %d la so nguyen to ", so);
    }
    else
    {
        printf("%d o phai la so nguyen to ", so);
    }
}
void bai3()
{
    int chinhPhuong;
    int soDem = 0;
    int i;
    printf("vui long nhap so cua ban \n");
    scanf("%d", &chinhPhuong);
    for (i = 1; i < chinhPhuong; i++)
    {
        if (i * i == chinhPhuong)
        {
            printf("%d la so chinh phuong ", chinhPhuong);
        }
    }
    printf("%d không là số chính phương ", chinhPhuong);
}
int main()

{
    int luaChon;
    do
    {
        printf("\n ===>Menu chuong trinh<===\n");
        printf("1.tinh trung binh tong cua cac so tu nhien chia het cho 2 \n");
        printf("2.: xay dung chuong trinh xac dinh so nguyen to\n");
        printf("3.:: xay dung ct chinh phuong  \n");
        printf("0 . thoat \n");
        printf("-------------------------------\n");

        printf("chuong trinh ban muon chon la: ");
        scanf("%d ", &luaChon);
        switch (luaChon)
        {
        case 1:
            bai1();
            break;
        case 2:
            bai2();
            break;
        case 3:
            bai3();
            break;
        case 0:
            return 0;
        default:
            printf("\n vui long chon dung chuong trinh vui long nhap lai \n");
            break;
        }
    } while (luaChon != 0);
    return 0;
}