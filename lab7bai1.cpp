#include <stdio.h>
#include <string.h>
int main()
{
    char chuoi[100];
    printf("<<<-------------------------->>>\n \n");
    printf("xin moi ban nhap chuoi :\n");

    gets(chuoi);
    int i = 0;
    int soNguyenAm = 0;
    int soPhuAm = 0;
    int doDai = strlen(chuoi);
    for (i = 0; i < doDai; i++)
    {
        if (chuoi[i] == 'a' || chuoi[i] == 'e' || chuoi[i] == 'i' || chuoi[i] == 'o' || chuoi[i] == 'u' || chuoi[i] == 'A' || chuoi[i] == 'E' || chuoi[i] == 'I' || chuoi[i] == 'O' || chuoi[i] == 'U')
        {
            soNguyenAm++;
        }
        else{
            soPhuAm++;
        }
    }
    printf("\n chuoi %c co chua : %d nguyen am va %d phu am ", chuoi, soNguyenAm, soPhuAm);
    return 0;
}