#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int i,g,u,y;
	int r=1;
	int r1=1;
	int pp=1;
	int p=7;
	int arr[8];
	
	for(i=0;i<7;i++){
		arr[i]=0;
	}
	
	
	for(u=0;u<p*7;u++){
		for(i=0;i<8;i++){
			if(r1<=7){
				if(i==p){
					arr[i]=r;
					for(g=0;g<8;g++){
						printf("%d",arr[g]);
					}
					printf("\n");
					r++;
					r1++;
				}
			}
			if(r1>p && r<=p*2){
				if(i==p){
					for(y=0;y<8;y++){
						if(y==p){
						arr[y]=r;
						for(g=0;g<8;g++){
						printf("%d",arr[g]);
					}
					printf("\n");
					r++;
					r1++;
				}
					}
					arr[i-1]=r-p;
					arr[i]=0;
					for(g=0;g<8;g++){
						printf("%d",arr[g]);
					}
					printf("\n");
					r++;
					r1++;
				}	
			}
			if(r1>p*2 && r<=p*3){
				if(i==p){
					arr[i-2]=r-p*2;
					arr[i-1]=0;
					arr[i]=0;
					for(g=0;g<8;g++){
						printf("%d",arr[g]);
					}
					printf("\n");
					r++;
					r1++;
				}

				
			}
			if(r1>p*3 && r<=p*4){
				if(i==p){
					arr[i-3]=r-p*3;
					arr[i-2]=0;
					arr[i-1]=0;
					arr[i]=0;
					for(g=0;g<8;g++){
						printf("%d",arr[g]);
					}
					printf("\n");
					r++;
					r1++;
				}

				
			}
			if(r1>p*4 && r<=p*5){
				if(i==p){
					arr[i-4]=r-p*4;
					arr[i-3]=0;
					arr[i-2]=0;
					arr[i-1]=0;
					arr[i]=0;
					for(g=0;g<8;g++){
						printf("%d",arr[g]);
					}
					printf("\n");
					r++;
					r1++;
				}

				
			}
			if(r1>p*5 && r<=p*6){
				if(i==p){
					arr[i-5]=r-p*5;
					arr[i-4]=0;
					arr[i-3]=0;
					arr[i-2]=0;
					arr[i-1]=0;
					arr[i]=0;
					for(g=0;g<8;g++){
						printf("%d",arr[g]);
					}
					printf("\n");
					r++;
					r1++;
				}

				
			}
			if(r1>p*6 && r<=p*7){
				if(i==p){
					arr[i-6]=r-p*6;
					arr[i-5]=0;
					arr[i-4]=0;
					arr[i-3]=0;
					arr[i-2]=0;
					arr[i-1]=0;
					arr[i]=0;
					for(g=0;g<8;g++){
						printf("%d",arr[g]);
					}
					printf("\n");
					r++;
					r1++;
				}

				
			}
			if(r1>p*7 && r<=p*8){
				if(i==p){
					arr[i-7]=r-p*7;
					arr[i-6]=0;
					arr[i-5]=0;
					arr[i-4]=0;
					arr[i-3]=0;
					arr[i-2]=0;
					arr[i-1]=0;
					arr[i]=0;
					for(g=0;g<8;g++){
						printf("%d",arr[g]);
					}
					printf("\n");
					r++;
					r1++;
				}

				
			}
		}
	}
			
}
