#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "ejer1_3.h"


int main()
{
	int i;
	int t;
	printf("\ntamano del arreglo\n");
	scanf("%d",&t);
	int v[t];
	int v1[t];
	for(i=0;i<t;i++){
		printf("numero: ");
		scanf("%d",&v[i]);
		v1[i]=v[i];
	}
	ordb(v,t);
	ords(v1,t);
}
