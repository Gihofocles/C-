
void dec(int ip, int ia);

struct materia{
char nombre[100];
int semestre;
};

struct prof{
char nombre[100];
int semestre;
struct materia m;

};

struct alumno{
char nombre[100];
int semestre;
struct materia ma;
};

int t,j;

struct prof *profpun;
struct alumno *alumnopun;

void dec(int ip, int ia){
	int i,g;
	for(int i=0;i<ip;i++){
		printf("profesor:\n");
		printf("nombre: ");
		scanf("%s",&(profpun+i)->nombre);
		printf("\nsemestre: ");
		scanf("%d",&(profpun+i)->semestre);
		printf("\nmateria: ");
		printf("\nnombre de materia: ");
		scanf("%s",&(profpun+i)->m.nombre);
		printf("\nsemestre de la materia: ");
		scanf("%d",&(profpun+i)->m.semestre);
	}

	for(int i=0;i<ia;i++){
		printf("\nalumno:\n");
		printf("\nnombre: ");
		scanf("%s",&(alumnopun+i)->nombre);
		printf("\nsemestre: ");
		scanf("%d",&(alumnopun+i)->semestre);
		printf("\nmateria: ");
		printf("\nnombre de materia: ");
		scanf("%s",&(alumnopun+i)->ma.nombre);
		printf("\nsemestre de la materia: ");
		scanf("%d",&(alumnopun+i)->ma.semestre);
	
	}

	printf("\n\n\n\n");
	for(int i=0;i<ip;i++){
		printf("\nprofesor:\n");
		printf("\nnombre: ");
		printf("%s",(profpun+i)->nombre);
		printf("\nsemestre: ");
		printf("%d",(profpun+i)->semestre);
		printf("\nmateria: ");
		printf("\nnombre de materia: ");
		printf("%s",(profpun+i)->m.nombre);
		printf("\nsemestre de la materia: ");
		printf("%d",(profpun+i)->m.semestre);
		printf("\n\n\n\n");
	}
	
	printf("\n\n\n\n");
	for(int i=0;i<ia;i++){
		printf("alumno:\n");
		printf("nombre: ");
		printf("%s",(alumnopun+i)->nombre);
		printf("\nsemestre: ");
		printf("%d",(alumnopun+i)->semestre);
		printf("\nmateria: ");
		printf("\nnombre de materia: ");
		printf("%s",(alumnopun+i)->ma.nombre);
		printf("\nsemestre de la materia: ");
		printf("%d",(alumnopun+i)->ma.semestre);
		printf("\n\n\n\n");
		
	}
	
}






