#include <stdio.h>
#include <stdlib.h>
#include "ejer1_2.h"


int main()
{
	int i;
	int ip,ipm;
	int ia,iam;
	printf("\ncuantas estructuras tipo profesor vas a ingresar\n");
	scanf("%d",&ip);
	printf("\ncuantas estructuras tipo alumno vas a ingresar\n");
	scanf("%d",&ia);
	printf("\ncuantas estructuras tipo materia vas a ingresar para alumno\n");
	profpun = (struct prof*)malloc(sizeof(struct prof) * ip);
	alumnopun = (struct alumno*)malloc(sizeof(struct alumno) * ia);
	dec(ip,ia);
		
}
