#include<stdio.h>
#include<stdlib.h>


main(){
	int i,g,u,t,a;
	int r=1;
	int r1=1;
	int arr[8];

	for(i=0;i<7;i++){
		arr[i]=0;
	}


	for(i=0;i<8;i++){
		arr[7-0]=i;
		for(g=0;g<8;g++){
			printf("%d",arr[g]);
		}
			printf("\n");
		t++;
	}
	if(t>7){
		for(i=0;i<8;i++){
		arr[6]=i;


		for(t=0;t<8;t++){
			arr[7]=t;
			for(g=0;g<8;g++){
				printf("%d",arr[g]);
			}
			printf("\n");
			t++;
		}


		for(g=0;g<8;g++){
			printf("%d",arr[g]);
		}
			printf("\n");
		t++;
	}
	}
	
}