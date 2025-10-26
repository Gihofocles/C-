#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ejer2.h"


int main()
{
	int i;
	int n;
	char nb[100];

	for(i=0;i<=100;i++){
		nb[i]='*';
	}

	printf("Numero a convertir: ");
	scanf("%d",&n);
	i=100;
	ni(nb,n,i);
	printf("\n");
	i=0;
	while(nb[i]=='*'){	
		i++;
	}
	while(nb[i]!=NULL){
		printf("%c",nb[i]);
		i++;
	}
}
