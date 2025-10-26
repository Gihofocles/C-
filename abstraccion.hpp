#include <iostream>

using namespace std;

class Componente{
	private:
		int valor;
		int corriente;
		int voltaje;
	public:
		Componente();
		virtual void CalcularCorriente()=0;
		virtual void Mostrar()=0;
};
class Inductor:public Componente{
	private:
		float inductancia;
		float voltaje;
		float tiempo;
		float corriente;
	public:
		Inductor();
		void CalcularCorriente();
		void Mostrar();
};
class Capacitor:public Componente{
	private:
		float voltaje;
		float tiempo;
		float capacitancia;
		float corriente;
	public:
		Capacitor();
		void CalcularCorriente();
		void Mostrar();
};
class Resistor:public Componente{
	private:
		float resistencia;
		float voltaje;
		float corriente;
	public:
		Resistor();
		void CalcularCorriente();
		void Mostrar();
};
Componente::Componente(){
}
Inductor::Inductor(){
	cout<<"\nInductor\n";
	cout<<"Inductancia: ";
	cin>>inductancia;
	cout<<"Voltaje: ";
	cin>>voltaje;
	cout<<"Tiempo: ";
	cin>>tiempo;
	CalcularCorriente();
}
Capacitor::Capacitor(){
	cout<<"\nCapacitor\n";
	cout<<"Voltaje: ";
	cin>>voltaje;
	cout<<"Tiempo: ";
	cin>>tiempo;
	cout<<"capacitancia: ";
	cin>>capacitancia;
	CalcularCorriente();
}
Resistor::Resistor(){
	cout<<"\nResistor\n";
	cout<<"Voltaje: ";
	cin>>voltaje;
	cout<<"Resistencia: ";
	cin>>resistencia;
	CalcularCorriente();
}
void Inductor::CalcularCorriente(){
	corriente=((tiempo*voltaje)/inductancia);
}
void Capacitor::CalcularCorriente(){
	corriente=0;
}
void Resistor::CalcularCorriente(){
	corriente=voltaje/resistencia;
}
void Inductor::Mostrar(){
	cout<<"\nCorriente: "<<corriente<<" A\n";
}
void Capacitor::Mostrar(){
	cout<<"\nCorriente: "<<corriente<<" A\n";
}
void Resistor::Mostrar(){
	cout<<"\nCorriente: "<<corriente<<" A\n";
}