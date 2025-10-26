#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void ni(unsigned int* n,int* r, int t){
	int i;
	int g=0;
	int a1=0;
	int an=0;
	int d=-5;

	for(i=0;i<t;i++){
		for(g=0;g<t;g++){
			if(n[g]==i){
				a1++;
				if(a1>1){
					n[g]=d;
					an++;
				}
			}
		}
		a1=0;
	}

	*r=an;
}
int main()
{
	srand(time(NULL));
	int i;
	unsigned int n[100];
	int r;
	int nu;
	int t;
	printf("\ncuantos numeros:");
	scanf("%d",&t);
	for(i=1;i<=t;i++){
		printf("\nnumero %d: ",i);
		//nu=0+rand()%101;
		//printf("%d",nu);
		scanf("%d",&nu);
		n[i-1]=nu;
	}
	ni(n,&r,t);
	printf("\n");
	for(i=0;i<t;i++){
		printf("%d ",n[i]);
	}	
	printf("\nse modificaron: %d numeros",r);
}
