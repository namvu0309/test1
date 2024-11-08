#include <stdio.h>
int main()
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
    return 0;
}