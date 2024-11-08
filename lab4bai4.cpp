#include <stdio.h>
int main()
{
	printf("hllo word");
	float tong = 0;
	float bienDem = 0;
	float trungBinh = 0;
	int so;
	int count = 0;
	int i;
	int luaChon;
	int chinhPhuong;
	int soDem = 0;
	do
	{
		printf("\n ===>Menu chuong trinh<===\n");
		printf("1.tinh trung binh tong cua cac so tu nhien chia het cho 3 \n");
		printf("2.: xay dung chuong trinh xac dinh so nguyen to\n");
		printf("0 . thoat \n");
		printf("-------------------------------\n");

		printf("chuong trinh ban muon chon la: ");
		scanf("%d ", &luaChon);

		switch (luaChon)
		{
		case 1:

			int min, max;
			printf("vui long nhap min va max \n");
			scanf("%d", &min);
			scanf("%d", &max);
			while (min <= max)
			{
				if (min % 3 == 0)
				{
					tong = tong + min;
					bienDem = bienDem + 1;
				}
				min++;
			}
			trungBinh = tong / bienDem;
			printf("trung binh tong cua 2 so tu nhien chia het cho 3 la %.2f", trungBinh);
			break;
		case 2:

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
			break;

		case 0:
			return 0;
		default:
			printf("\n vui long chon dung chuong trinh vui long nhap lai \n");
			break;
		}

	} while (luaChon != 0);
	return 0;
}