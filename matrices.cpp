#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int col, fil,numcol,numcol1,y,c;
	char mat[col][fil]={};
	int d=0;
	printf("Upiita \n");
	printf("IPN \n");
	printf("Hernandez Orozco Cesar Gibran \n\n\n");
	printf("Cuantas filas?: \n");
	scanf("%d",&fil);
	printf("Cuantas columnas?: \n");
	scanf("%d",&col);
	y = col;
    for(int i=0;i<fil;i++){
        for (int t=0;t<col;t++){
            mat[t][i]= {'*'};
        }
    }
   // printf(" ");
    for(int r=0;r<fil;r++){
    	for(int f=c;f<=y;f++){	
    		printf("%c",mat[r][f]);
    		
		}
		c++;
		y--;
		printf("\n");
		d++;

		for(int x=0;x<d;x++){
			printf(" ");
		}
	}
	

	return 0;
}

