#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void invierte(char p[100]);
void devuleve(char p[100]);
void cambio(char p[100]);
void mayus(char p[100]);
void minus(char p[100]);
void borra();
int main()
{
	int i;
	int m;
	char p[100];
	for(i=0;i<=100;i++){
		p[i]='*';
	}
	while(m!=0){
	system("pause");
	system("cls");
	printf("\nIngresa una palabra\n");
	scanf("%s",&p);
	printf("Elige una opcion\n");
	printf("0. Salir\n");
	printf("1. Invierte la palabra\n");
	printf("2. Regresa la palabra\n");
	printf("3. Cambiar a mayusculas o a minusculas\n");
	scanf("%d",&m);
		switch (m) {
			case 1:
				invierte(p);
			break;
			case 2:
				devuleve(p);
			break;
			case 3:
				cambio(p);
			break;
		}
	}
}
void borra(char p[100]){
	int i;
	for(i=0;i<=100;i++){
		p[i]='*';
	}
}
void invierte(char p[100]){
	int i=0;
	int g=0;
	const int t=100;
	char c[t];
	for(i=0;i<=100;i++){
		c[i]='*';
	}
	for(i=t;i>=0;i--){
		if(p[i]!='*'){
			c[g]=p[i];
			g++;
		}
	}
	i=0;
	while(c[i]!='*'){
		printf("%c",c[i]);
		i++;
	}
	printf("\n");
	borra(p);
}
void devuleve(char p[100]){
	int i=0;
	while(p[i]!='*'){
		printf("%c",p[i]);
		i++;
	}
	printf("\n");
	borra(p);
}
void mayus(char p[100]){
	for(int i=0;i<=100;i++){
		if(p[i]!='*'){
			p[i]=toupper(p[i]);
		}
	}
	for(int i=0;i<=100;i++){
		if(p[i]!='*'){
			printf("%c",p[i]);
		}
	}
	printf("\n");
	borra(p);
}
void minus(char p[100]){
	for(int i=0;i<=100;i++){
		if(p[i]!='*'){
			p[i]=tolower(p[i]);
		}
	}
	for(int i=0;i<=100;i++){
		if(p[i]!='*'){
			printf("%c",p[i]);
		}
	}
	printf("\n");
	borra(p);
}
void cambio(char p[100]){
	int c;
	printf("\nElige una opcion");
	printf("\n1. a mayusculas");
	printf("\n2. a minusculas\n");
	scanf("%d",&c);
	switch(c){
		case 1:
			mayus(p);
		break;
		case 2:
			minus(p);
		break;
	}
	borra(p);
}