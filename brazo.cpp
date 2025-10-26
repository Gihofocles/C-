#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float a1, a2, b1, b2, a3, a4, c, d, l3, L2, L1, x, y, L3, b3, a5; 
	
	L1 = 3;
	L2 = 4;

	printf("Upiita \n");
	printf("IPN \n");
	printf("Hernandez Orozco Cesar Gibran \n\n\n");
	printf("A que cordenadas quiere llegar\n");
	printf("X:");
	scanf("%f",&x);
	printf("\nY:");
	scanf("%f",&y);
	L3 = sqrt((x*x)+(y*y));
	l3 = L3;
	

	if (L3 <= (L1 + L2))
	{
		a3 = asin(y/l3);
		b1 = acos(((L1*L1)+(L3*L3)-(L2*L2))/(2*L1*L3));
		b2 = acos(((L2*L2)+(L3*L3)-(L1*L1))/(2*L2*L3));
		a1 = (a3-b1)*57.296;
		a4 = (180-((a3*57.296)+90));
		a5 = (a4)-(b2*57.296);		
		a2 = 180 + (-90 - a5 - a1);
		printf("Colocar los brazos en:");
		printf("\na1:%.0f y a:%.0f",a1,a2);	
	}

	else{
		system("color 4");
		printf("\n ¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡");
		printf("\n Area Fuera de rango");
		printf("\n !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
	}
	return 0;
}

