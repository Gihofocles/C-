#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ejer2_2.h"

int main()
{
	int i;
	int n=0;
	int m=0;
	int mi=0;
	int v[100];

	while(m!=4){
		system("pause");
		system("cls");
		printf("\nque quieres imprimir\n1. vector\n2. estructura\n3. conocer el tamano\n4. salir\n");
		scanf("%d",&m);
		switch(m){
			case 1:
				printf("largo del vector: ");
				scanf("%d",&n);
				for(i=0;i<n;i++){
					printf("introduce la posicion %d: ",i+1);
					scanf("%d",&v[i]);
				}
				printf("elige el metodo\n1. por valor\n2. por referencia\n");
				scanf("%d",&mi);
				switch(mi){
					case 1:
						prinvv(v,n);
					break;
					case 2:
						prinvr(v,n);
					break;
				}
			break;
			case 2:
				es();
				printf("elige el metodo\n1. por valor\n2. por referencia\n");
				scanf("%d",&mi);
				switch(mi){
					case 1:
						prinev(p,a);
					break;
					case 2:
						priner(&p,&a);
					break;
				}
			break;
			case 3:
				tam();
			break;

		}
	}
	printf("\nque quieres hacer\n1. imprimirlo por valor\n2. imprimirlo por refer");

	i=0;

}
