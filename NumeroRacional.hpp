#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

class NumeroRacional
{
private:
	int numerador;
	int denominador;
	int n;
	int d;
	int mcd;
public:
	NumeroRacional();
	void ObtenerMcd();
	void ImprimirResultado();
};

  NumeroRacional::NumeroRacional(){
 	cout<<"numerador: ";
 	cin>>numerador;
 	cout<<"denominador: ";
	cin>>denominador;
	d=denominador;
	n=numerador;
 }
 void NumeroRacional::ObtenerMcd(){
	int i=1;
	while(i>0){
		i=numerador%denominador;
		numerador=denominador;
		if(i>0){
		denominador=i;
		}
	}
	mcd=denominador;
}

 void NumeroRacional::ImprimirResultado(){
	cout<<"\n\nEl Mcd de "<<n<<" y "<<d<<" es: "<<mcd;	
}