#include <stdio.h>
#include <math.h>
#include <string.h>
int main() {
	float  	a , b , c ;
	printf (" Phuong trinh co dang : ax^2 + bx + c = 0");
	printf ("\n a = ");
	scanf ("%f", &a);
	printf ("\n b = ");
	scanf ("%f",&c );
	printf ("\n c = ");
	scanf ("%f",&c);
	if (a==0&&b==0){
		printf ("Phuong trinh co vo so nghiem");
	}
	else if (a==0&&b!=0){
		printf ("Phuong trinh vo nghiem");
	}
	else if (a!=0){
			float delta= pow(b,2)-4*a*c ;
		printf (" delta = ", delta);
		 if (delta<0){
			printf ("Phuong trinh vo nghiem");
		}
		else if (delta==0){
			printf ("Phuong trinh co nghiem kep %.2f",-b/(2*a));
		}
		else if (delta>0){
			printf ("Phuong trinh co 2 nghiem rieng biet ");
			float x1 = (-b + sqrt(delta))/(2*a); 
			float x2 = (-b - sqrt(delta))/(2*a);		
			}	
		}
}