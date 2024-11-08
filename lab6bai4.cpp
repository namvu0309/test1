#include <stdio.h>
int main()
{
    int cot, hang,i,j;
    printf("moi nguoi dung nhap vao so hang  ");
    scanf("%d", &hang);
    printf("moi ban nhap so cot  ");
    scanf("%d", &cot);
    int mang[hang][cot];
    for (i = 0; i < hang; i++)
    {
        for (j = 0; j < cot; j++)
        {
            printf("moi ban nhap gia tri hang [%d] cot[%d] =",(i+1),(j+1));
            scanf("%d", &mang[i][j]);
        }
    }
    printf("----------------\n\n");
    printf("binh phuong cua ma tran la \n");
    for (i = 0; i < hang; i++)
    {
        for (j = 0; j < cot; j++)
        {
            printf("%d \t", mang[i][j] * mang[i][j]);   
        }
        printf("\n");
    }

    
}