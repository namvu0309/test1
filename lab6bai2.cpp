#include <stdio.h>

int main()
{
    int n;
    printf("moi ban nhap so luong so trong mang: \n");
    scanf("%d", &n);
    int mang[n];
    for (int i = 0; i <= n; i++)
    {
        printf("moi ban nhap phan tu thu %d : ", (i+1));
        scanf("%d", &mang[i]);
    }
    int i;
    int min = mang[0],max=mang[0];
    for (i = 0; i < n; i++)
    {
        if (mang[i]>max)
        {
            max= mang[i];
        }
        if (mang[i]<min)
        {
            min=mang[i];
        }
        
    }
    
    printf("so min %d \t so max %d",min,max);
   
}