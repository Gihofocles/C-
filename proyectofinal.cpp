#include "Final.hpp"

int main(){

	int i;
	int g;
	cout<<"Desarrollado por:\nHernandez Orozco Cesar Gibran\nMontes Cruz Leonardo\nVargas Giron Carlos Antonio\nRosas Lemus Andres \n1MV4\nEsponjositos\n\nBienvenido al sistema de encuestas\n\n";
	while(i!=1&&i!=2&&i!=3&&i!=4){
		cout<<"\n\n";
		system("pause");
		system("cls");
		cout<<"Elige una opcion\n1.Calidad de alimentos\n2.Tiempos de entrega\n3.Precio de los alimentos\n4.Atencion de operadores\n5.Salir\n\n";
		cin>>i;
		switch(i){
			case 1:
			{
				CalidadAlimentos *x;
				x=new CalidadAlimentos;
				x->MostrarDatos();
			}
			break;
			case 2:
			{
				TiempoEntrega *y;
				y=new TiempoEntrega;
				y->MostrarDatos();
			}
			break;
			case 3:
			{
				PrecioAlimentos *z;
				z=new PrecioAlimentos;
				z->MostrarDatos();
			}
			break;
			case 4:
			{
				AtencionOperadores *a;
				a=new AtencionOperadores;
				a->MostrarDatos();
			}
			break;
			case 5:
				g=1;
			break;
		}
		if(g==1){
			g=0;
			i=4;
		}
		else{
			i=0;
			g=0;
		}
	}
}