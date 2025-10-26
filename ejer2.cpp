#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
void pvp(char pa[100],int v);
void pvcpu(char pa[100],int v);
void prin(char pa[100]);
int main()
{
	srand (time(NULL));
	char palabra[100];
	int modalidad;
	int vidas;
	int i;
	for(i=0;i<=100;i++){
		palabra[i]='*';
	}
	printf("Elige la modalidad\n1. PVP\n2. PVCpu\n");
	scanf("%d", &modalidad);
	printf("Cantidad de vidas\n");
	scanf("%d", &vidas);
	printf("\npalabra:\n");
	scanf("%s", &palabra);
	switch(modalidad){
		case 1:
			pvp(palabra,vidas);
		break;
		case 2:
			pvcpu(palabra,vidas);
		break;
	}
	return 0;
}
void pvp(char pa[100],int v){
	char falso[100];
	char temp[1];
	int i;
	int gan;
	int gana=0;
	int g=0;
	int us=0;
	int er;
	for(i=0;i<=100;i++){
		falso[i]='*';
	}
	i=0;
	gan=0;
	while(pa[i]!=0){
	 	falso[i]='-';
	 	i++;
	 	gan++;
	}
	gana=gan;
	while(v>0){
	 	system("cls");
	 	printf("\nQuedan: %d vidas\n\n",v);
	 	prin(falso);
	 	printf("\nLetra:");
	 	scanf("%s",&temp);
	 	i=0;
	 	er=0;
	 	while(pa[i]!='*'){
			if(pa[i]==temp[0]){
				falso[i]=pa[i];
			}
			else{
				er++;
			}
			i++;
		}
		if(er>i-1){
			v--;
			er=0;
		}
	 	system("pause");
	 	gan=0;
	 	for(i=0;i<=100;i++){
	 		if(falso[i]==pa[i]){
	 			if(falso[i]!='*'){
	 				gan++;
	 			}
	 		if(falso[i]=='*'){
	 			break;
			 }
	 		}
	 	}
	 	if(gana==gan){
	 		break;
	 	} 	
	}
	if(gana==gan){
	 	system("cls");
	 	system("color 2");
	 	printf("\nFelicidades haz ganado");
	}
	else{
		system("cls");
	 	system("color 4");
	 	printf("\nLo siento te ahorcaron");
	 	printf("\nLa palabra era: ");
	 	prin(pa);
	}
}
void pvcpu(char pa[100],int v){
	srand (time(NULL));
	char abc[26];
	char usd[26];
	int ran=0;
	int i;
	int g=0;
	int ex=0;
	char falso[100];
	char temp[1];
	int gan;
	int gana=0;
	int er;
	int ver;
	int usi=0;
	int us=0;

	ver = v;
	for(i=0;i<=100;i++){
		falso[i]='*';
	}
	i=0;
	gan=0;
	while(pa[i]!=0){
	 	falso[i]='-';
	 	i++;
	 	gan++;
	}
	gana=gan;
	for(i=97;i<=122;i++){
		char chr(i);
		abc[g]=chr;
		usd[g]='*';
		g++;
	}
	while(v>0){
	 	system("cls");
	 	printf("\nQuedan: %d vidas\n\n",v);
	 	prin(falso);
	 	printf("\nLetra:");
	 	//ran=0+rand()%27;
		//temp[0]=abc[ran];
	while(ex==0){
		ran=0+rand()%26;
		temp[0]=abc[ran];
			for(g=0;g<=26;g++)
			if(usd[g]==temp[0]){
				us++;
			}	
			if(us==0){
				us=0;
				ex=1;
				usd[usi]=temp[0];
				usi++;
			}
			if(us>0){
				ex=0;
				us=0;
			}
	}
	ex=0;
	i=0;
	er=0;
	while(pa[i]!='*'){
		if(pa[i]==temp[0]){
			falso[i]=pa[i];
		}
		else{
			er++;
		}
			i++;
		}
		if(er>i-1){
			v--;
			er=0;
		}
	 	gan=0;
	 	for(i=0;i<=100;i++){
	 		if(falso[i]==pa[i]){
	 			if(falso[i]!='*'){
	 				gan++;
	 			}
	 		if(falso[i]=='*'){
	 			break;
			 }
	 		}
	 	}
	 	if(gana==gan){
	 		break;
	 	}	
	}
	if(gana==gan){
	 	system("cls");
	 	system("color 2");
	 	ver= ver-v;
	 	printf("\nNi modo la CPU te ha vencido en: %d intentos",ver);
	}
	else{
		system("cls");
	 	system("color 4");
	 	printf("\nLo siento te ahorcaron");
	 	printf("\nLa palabra era: ");
	 	prin(pa);
	}
}
void prin(char pa[100]){
	int i=0;
	while(pa[i]!='*'){
		printf("%c",pa[i]);
		i++;
	}
	printf("\n");
}
