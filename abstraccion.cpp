#include "abstraccion.hpp"

int main(){	
	int i=0;
	while(i!=1&&i!=2&&i!=3&&i!=4){
		system("cls");
		cout<<"Desarrollado por:\nHernandez Orozco Cesar Gibran\n1MV4\nEsponjositos\n\n";
		cout<<"\n1. Inductor\n2. Capacitor\n3. Resistor\n4. salir\n\nOpcion: ";
		cin>>i;
		if(i!=1&&i!=2&&i!=3&&i!=4){
			cout<<"\nOpcion invalida intente de nuevo\n";
			system("pause");
		}
		switch(i){
			case 1:{
				Inductor *x;
				x=new Inductor;
				x->Mostrar();
			}	
			break;
			case 2:{
				Capacitor *y;
				y=new Capacitor;
				y->Mostrar();
				break;
			}
			case 3:{
				Resistor *z;
				z=new Resistor;
				z->Mostrar();
				break;
			}
			case 4:
			break;
		}
		if(i!=4){
			i=0;
		}
		system("pause");	
	}
}
