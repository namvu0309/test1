#include <stdio.h>
int main()
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
            return 0;
            if (i * i != 0)
            {
                printf("%d không là số chính phương ", chinhPhuong);
            }
        }
    }
    printf("%d không là số chính phương ", chinhPhuong);
    return 0;
}