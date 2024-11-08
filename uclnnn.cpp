#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
  int bienDem=0,so1,so2;
  printf("moi ban nhap so may man thu nhat  cua ban \n");
  scanf("%d",&so1);
  printf("moi ban nhap so may man thu 2 cua ban \n");
  scanf("%d",&so2);
  printf("Chuong trinh tro choi FPOLY LOTT \n");
  int randomNumber;
  srand(time(0));
  printf("<<<----------------KETQUA------------------>>>\n");
  printf("So trung thuong \n");
  
  for (int i = 0; i < 2; i++)
  {
    randomNumber = rand() % 15;
    printf("%5d", randomNumber);
    if (randomNumber==so1||randomNumber==so2){
      bienDem++;
    }
  }
  if (bienDem==0){
    printf("\nChuc ban may man lan sau :))))\n");
  }
  else if (bienDem==1){
    printf("\n  Chuc mung ban da trung giai nhi \n");
  }
  else if (bienDem==2){
    printf("\n Chuc mung ban da trung giai nhat \n");
  }
}