#include <stdio.h>
#include <string.h>
int main()
{
    char userSys[] = "admin";
    char passSys[] = "12345";
    char user[100];
    char pass[100];
    fflush(stdin);
    printf("moi ban nhap user :\n");
    gets(user);
    fflush(stdin);
    printf("moi ban nhap pass : \n");
    gets(pass);
    fflush(stdin);

   if (strcmp(user,userSys)==0&&strcmp(pass,passSys)==0)
    {
        printf("ban da dang nhap thanh cong\n");
    }
    else{
        printf("ban da dang nhap o thanh cong\n");
    }
    
    return 0;
}