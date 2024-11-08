#include <stdio.h>
#include <conio.h>

int main()
{
	int luaChon;
	do
	{
		printf("===>Menu chuong trinh<===\n");
		printf("1.Tinh hoc luc \n");
		printf("2.Giai phuong trinh bac 1\n");
		printf("3.Giai phuong trinh bac 2\n");
		printf("4.Tinh tien dien tieu dung\n");
		printf("-------------------------------\n");

		printf("chuong trinh ban muon chon la: ");
		scanf("%d", &luaChon);
		switch (luaChon)
		{
		case 1:
			printf("da chon : Tinh hoc luc ");
			break;
		case 2:
			printf("da chon : Giai phuong trinh bac 1 ");
			break;
		case 3:
			printf("da chon : Giai phuong trinh bac 2 ");
			break;
		case 4:
			printf("da chon : Tinh tien dien tieu dung");
			break;
		default:
			printf("vui long chon dung chuong trinh");
			break;
		}
	} while (luaChon != 0);
	return 0;
}
