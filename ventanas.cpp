#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

void gotoxy (short x, short y);

void Ventana(int x1, int y1, int x2, int y2)
{

char esi(201);  //esquina superior izquierda
char hor(205);  //horizontal
char esd(187);  //esquina superior derecha
char ver(186);  //vertical
char eii(200);  //esquina inferior izquierda
char eid(188);  //esquina inferior derecha
int ancho; 
int alto;
int i;
int j;

ancho = x2 - x1;
alto = y2 - y1;

gotoxy(x1,y1);

printf("%c",esi);
//dibuja horizontal
for(i=0;i<=ancho;i++){
	printf("%c",hor);
}
printf("%c\n",esd);

gotoxy(x1,y1 + 1);
//dibuja vertical
for(i=0;i<=alto;i++){
	printf("%c" , ver);
	for(j=0;j<=ancho;j++){
		printf(" ");
	}
	printf("%c\n" , ver);
	gotoxy(x1,y1 + 2 + i );
}
printf("%c",eii);
gotoxy(x1+1, y2 +2 );
//dibuja horizontal
for(i=0;i<=ancho;i++){
	printf("%c",hor);
}
printf("%c\n",eid);



}// fin ventana


void gotoxy (short x, short y){
	COORD pos = {x, y};
	SetConsoleCursorPosition(GetStdHandle (STD_OUTPUT_HANDLE), pos);
}


int main()
{
	const int largo = 40;
	int p;
	int nt=0;
	char d[largo];
	char chr(168);
	int i;
	int x1=50;
	int y1=50;
	int x2=100;
	int y2=100;

	for(;;){
		for(i=0;i<=largo;i++){
			d[i]=' ';		
		}
		nt=0;
		system("cls");
		//Ventana(xv,yv,50+xv,5+yv);
		Ventana(x1,y1,x2,y2);
		gotoxy(1+x1,1+y1);
		printf("%cIntroduce una palabra? : ", chr);
		scanf("%s", &d);

		
		for(int i=0;i<=40;i++){
			if(d[i]=='a'||d[i]=='e'||d[i]=='i'||d[i]=='o'||d[i]=='u'){
				nt++;
			}
		}

		gotoxy(1+x1,2+y1);
		printf("tu palabra tiene: %d vocales\n",nt);
		//system("PAUSE");
		
		gotoxy(1+x1,3+y1);
		printf("Otra palabra S/N?");
		scanf("%s", &d);

		if(toupper(d[0]) == 'N'){ 
				//break; 
			//system("exit");
			exit(-1);
		}
	}	
	return 0;
}