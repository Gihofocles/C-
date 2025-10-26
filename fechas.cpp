#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int d,m,a;
	inicio:
	system("cls");
	printf("Upiita \n");
	printf("IPN \n");
	
	printf("Hernandez Orozco Cesar Gibran \n\n\n");
	printf("Introduzca una fecha dia mes año completo:\n");
	scanf("%d %d %d",&d,&m,&a);
	
	switch (m){
		case 1:
			if(d>31|| d<=0){
				printf("Fecha invalida \n");
			}
			else{
				printf("Fecha valida \n");
			}	
		break;
		case 2:
			
			if((a%4==0 )&& (a%100 != 0)){
				if(d>29|| d<=0){
				printf("Fecha invalida \n");
				}
				else{
				printf("Fecha valida \n");
			}
			}
			
			else if(a%100 ==0 && a%400 ==0){
			printf("%d, ",a);
			if(d>29|| d<=0){
				printf("Fecha invalida \n");
				}
			}
			else{
				if(d>28|| d<=0){
				printf("Fecha invalida \n");
				}
				else{
				printf("Fecha valida \n");
			}
			}
			
		break;
		case 3:
			if(d>31|| d<=0){
				printf("Fecha invalida \n");
			}
			else{
				printf("Fecha valida \n");
			}
		break;
		case 4:
			if(d>30|| d<=0){
				printf("Fecha invalida \n");
			}
			else{
				printf("Fecha valida \n");
			}
		break;
		case 5:
			if(d>31|| d<=0){
				printf("Fecha invalida \n");
			}
			else{
				printf("Fecha valida \n");
			}
		break;
		case 6:
			if(d>30|| d<=0){
				printf("Fecha invalida \n");
			}
			else{
				printf("Fecha valida \n");
			}
		break;
		case 7:
			if(d>31|| d<=0){
				printf("Fecha invalida \n");
			}
			else{
				printf("Fecha valida \n");
			}
		break;
		case 8:
			if(d>31|| d<=0){
				printf("Fecha invalida \n");
			}
			else{
				printf("Fecha valida \n");
			}
		break;
		case 9:
			if(d>30|| d<=0){
				printf("Fecha invalida \n");
			}
			else{
				printf("Fecha valida \n");
			}
		break;
		case 10:
			if(d>31|| d<=0){
				printf("Fecha invalida \n");
			}
			else{
				printf("Fecha valida \n");
			}
		break;
		case 11:
			if(d>30|| d<=0){
				printf("Fecha invalida \n");
			}
			else{
				printf("Fecha valida \n");
			}
		break;
		case 12:
			if(d>31|| d<=0){
				printf("Fecha invalida \n");
			}
			else{
				printf("Fecha valida \n");
			}
		break;
	}
	if(a>2021){
				printf("Fecha invalida \n");
	}
	
	system("pause");
	goto inicio;
	
}

