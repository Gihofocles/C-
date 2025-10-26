#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int t,i,g,r;

	printf("numero de filas:");
	scanf("%d",&t);
	printf("numero de columnas:");
	scanf("%d",&r);
	int a[t][r];
	int at[r][t];


	for(i=0;i<t;i++){
		for(g=0;g<r;g++){
			printf("introduce el termino %dX%d: ",i+1,g+1);
			scanf("%d",&a[i][g]);
		}
	}

	for(i=0;i<r;i++){
		for(g=0;g<t;g++){
			at[i][g]=a[g][i];
		}
	}

	for(i=0;i<r;i++){
		for(g=0;g<t;g++){
			printf(" %d |",at[i][g]);
		}
		printf("\n");
	}

	
	return 0;
}
