#include <stdio.h>
#include <string.h>
int main()
{
     char k[50];
     int j, i, n;
     char chuoi[5][50];
     for (i = 0; i < 5; i++)
     {
          printf("moi ban nhap chuoi thu %d : ", (i + 1));
          gets(chuoi[i]);
     }
     for (i = 0; i < 4; i++)
     {
          for (j = i + 1; j < 5; j++){
               if (strcmp(chuoi[i], chuoi[j]) > 0)
               {
                    strcpy(k, chuoi[i]);
                    strcpy(chuoi[i], chuoi[j]);
                    strcpy(chuoi[j], k);
               }
     }}
     printf("\n<<------------------------->>>\n\n");
     for (i = 0; i < 5; i++)
     {
          printf("chuoi da dc xap xep sau khi nhap la :%s\n", chuoi[i]);
     }
}