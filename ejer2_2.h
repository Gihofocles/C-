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
struct materia m;
};

struct prof p;
struct alumno a;

void prinev(prof,alumno);
void priner(prof pp, alumno ap);
void priner(prof *pp, alumno *ap);

void es(){
	printf("profesor:\n");
	printf("nombre: ");
	scanf("%s",&p.nombre);
	printf("\nsemestre: ");
	scanf("%d",&p.semestre);
	printf("\nmateria: ");
	printf("\nnombre de materia: ");
	scanf("%s",&p.m.nombre);
	printf("\nsemestre de la materia: ");
	scanf("%d",&p.m.semestre);

	printf("alumno:\n");
	printf("nombre: ");
	scanf("%s",&a.nombre);
	printf("\nsemestre: ");
	scanf("%d",&a.semestre);
	printf("\nmateria: ");
	printf("\nnombre de materia: ");
	scanf("%s",&a.m.nombre);
	printf("\nsemestre de la materia: ");
	scanf("%d",&a.m.semestre);
}
void tam(){
	printf("\n\nEl tamaño de la estructura es:\n");
	printf("\n\nprofesor: %d\n",sizeof(struct prof));
	printf("\n\nalumno: %d\n",sizeof(struct alumno));
	printf("\n\nmateria: %d\n",sizeof(struct materia));
}
void prinvv(int v[100],int n){
	int i;
	printf("\n\ntu vector pasado por valor es:\n");
	for(i=0;i<n;i++){
		printf("%d ",v[i]);
	}
	printf("\n\n\n");
}
void prinvr(int* v, int n){
	int i=0;
	printf("\n\ntu vector pasado por referencia es:\n");
	for(i=0;i<n;i++){
		printf("%d ",v[i]);
	}
	printf("\n\n\n");
}

void prinev(prof pp, alumno ap){
	int i;
	printf("\n\ntu estrucutra pasada por valor es:\n");
	printf("profesor:\n");
	printf("nombre: %s",pp.nombre);
	printf("\nsemestre: %d",pp.semestre);
	printf("\nmateria: ");
	printf("\nnombre de materia: %s",pp.m.nombre);
	printf("\nsemestre de la materia: %d",pp.m.semestre);
	printf("\n\nalumno:\n");
	printf("nombre: %s",ap.nombre);
	printf("\nsemestre: %d",ap.semestre);
	printf("\nmateria: ");
	printf("\nnombre de materia: %s",ap.m.nombre);
	printf("\nsemestre de la materia: %d",ap.m.semestre);	
	printf("\n\n\n");
}
void priner(prof *pp,alumno *ap){
	int i;
	printf("\n\ntu estrucutra pasada por referencia es:\n");
	printf("profesor:\n");
	printf("nombre: %s",pp->nombre);
	printf("\nsemestre: %d",pp->semestre);
	printf("\nmateria: ");
	printf("\nnombre de materia: %s",pp->m.nombre);
	printf("\nsemestre de la materia: %d",pp->m.semestre);
	printf("\n\nalumno:\n");
	printf("nombre: %s",ap->nombre);
	printf("\nsemestre: %d",ap->semestre);
	printf("\nmateria: ");
	printf("\nnombre de materia: %s",ap->m.nombre);
	printf("\nsemestre de la materia: %d",ap->m.semestre);	
	printf("\n\n\n");
}