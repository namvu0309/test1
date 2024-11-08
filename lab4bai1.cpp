#include<stdio.h>
int main(){
	int min,max;
	int i;
	float tong=0,biendem=0,trungbinh=0;
	printf("Nhap gia tri min: ");
	scanf("%d",&min);
	printf("Nhap gia tri max: ");
	scanf("%d",max);
	
	i = min;
	while(i<=max){
		if(i%2==0){
		tong +=i;
		biendem+=1;	
}
		i++;
		
}
		if(biendem!=0){
			trungbinh = tong/biendem;
			printf("Trung binh cac so tu min den max chia het cho 2 la: %f\t",trungbinh);
			}else{
			printf("Khong co so nao chia het cho 2 tu min den max.");
			}
			
			return 0;
}