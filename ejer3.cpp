#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void ni(int* n,int* r){
	int i;
	int g=4;
	for(i=0;i<5;i++){
		r[i]=n[g];
		g--;
	}
}
int main()
{
	int i;
	int n[5];
	int r[5];
	int nu;

	for(i=1;i<6;i++){
		printf("numero %d: ",i);
		scanf("%d",&nu);
		n[i-1]=nu;
	}
	ni(n,r);
	for(i=0;i<5;i++){
		printf("%d ",r[i]);
	}	
}
