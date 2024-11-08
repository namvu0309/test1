#include <stdio.h>
int timSoLonNhat(int so1, int so2, int so3)
{
    int max = so1;
    if (so2 > max)
    {
        max = so2;
    }
    if (so3 > max)
    {
        max = so3;
    }
    return max;
}
int main()
{   
    int a,b,c;
    printf("moi ban nhap 3 so \n");
    scanf("%d%d%d", &a, &b, &c);
    int soMax = timSoLonNhat(a,b,c);
    printf("gia tri lon nhat trong 3 so la %d", soMax);
    
    return 0;
    
}