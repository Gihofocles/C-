#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

class Comercializadora{
	protected:
		string nombre;
		float cargo;
	public:
		Comercializadora();
		float CalcularPago(float,float,int,int);
};

class Energia : public Comercializadora{
	private:
		float consumo;
	public:
		Energia();
		void Regresaconsumo();
		void Mostrar(); 
};

class SeguroCoche : public Comercializadora{
	private:
		int valor;
	public:
		SeguroCoche();
		void Regresavalor();
		void Muestra();
};

class Predio : public Comercializadora{
	private:
		float costoinmuenble;
	public:
		Predio();
		void Regresacostoinmueble();
		void Imprimir();
};

	Comercializadora::Comercializadora(){
		cout<<"Nombre Comercializadora: ";
 		cin>>nombre;
	}
	Energia::Energia(){
		cout<<"consumo: ";
		cin>>consumo;
		
	}
	Predio::Predio(){
		cout<<"Costo del inmueble: ";
		cin>>costoinmuenble;
	}
	SeguroCoche::SeguroCoche(){
		cout<<"Valor del coche: ";
		cin>>valor;
	}

	float Comercializadora::CalcularPago(float a,float b,int c,int d){
		float r;
		switch(d){
			case 1:
				r=a*1.012;
			break;
			case 2:
				r=b*.12;
			break;
			case 3:
				r=c*.013;	
			break;

		}
		return r;
	}
	void Energia::Regresaconsumo(){
		cargo=CalcularPago(consumo,0,0,1);
	}
	void Energia::Mostrar(){
		Regresaconsumo();
		cout<<"\nel cargo es de: "<<cargo;
	}

	void Predio::Regresacostoinmueble(){
		cargo=CalcularPago(0,0,costoinmuenble,3);
	}
	void Predio::Imprimir(){
		Regresacostoinmueble();
		cout<<"\nel cargo es de: "<<cargo;
	}

	void SeguroCoche::Regresavalor(){
		cargo=CalcularPago(0,valor,0,2);
	}
	void SeguroCoche::Muestra(){
		Regresavalor();
		cout<<"\nel cargo es de: "<<cargo;
	}

int main(){
	int i=0;
	int g=0;
	while(i!=1&&i!=2&&i!=3&&i!=4){
		cout<<"\n\n";
		system("pause");
		system("cls");
		cout<<"Elige una opcion\n1.Energia\n2.Seguro coche\n3.Predio\n4.Salir\n\n";
		cin>>i;
		switch(i){
			case 1:
			{
				Energia x;
				x.Mostrar();
			}
			break;
			case 2:
			{
				SeguroCoche y;
				y.Muestra();
			}
			break;
			case 3:
			{
				Predio z;
				z.Imprimir();
			}
			break;
			case 4:
			{	
				g=1;
			}
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