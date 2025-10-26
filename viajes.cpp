#include <iostream>
using namespace std;
void tabla(){
    string tabla[6][3]={"No.Vuelo  ","\tDestino  ","\tCosto  ","1256  ","\t\tCancun  ","\t4285.25  ","2565  ","\t\tMonterrey  ","\t3859.36  ","1278  ","\t\tGuadalajara  ","\t2156.36  ","4585  ","\t\tChihuahua  ","\t3258.00  ","3698  ","\t\tVeracruz  ","\t1256.25  ",};
    for(int i=0;i<6;i++){
        for(int g=0;g<3;g++){
            cout<<tabla[i][g];
        }
        cout<<endl;
    }
}
class Clientesinequipaje{
    private:
        string Nombrecliente;
        int numerocliente;
        float Costo;
    public:
        Clientesinequipaje();
        virtual void Calculaboleto(float costo);
        virtual void MuestraDatos();
};
class Clienteempleado{
    private:
        string Nombrecliente;
        int Numeroempleado;
        float Costo;
    public:
        Clientempleado();
        virtual void Calculaboleto(float costo);
        virtual void MuestraDatos();
};
class Clienteconequipaje{
    private:
        string Nombrecliente;
        string rfc;
        float Costo;
    public:
        Cliente();
        virtual void Calculaboleto(float costo);
        virtual void MuestraDatos();
};
class Aerolineas : public Clienteconequipaje,public Clienteempleado, public Clientesinequipaje{
    private:
        string Nombre;
        int Destino;
        string Estado;
        float Costo;
    public:
        Aerolineas();
        virtual void Calculaboleto();
        virtual void MuestraDatos();
};
Clientesinequipaje::Clientesinequipaje(){
};
Aerolineas::Aerolineas(){
};
void Clientesinequipaje::Calculaboleto(float costo){
    cout<<"Nombre del cliente: ";
    cin>>Nombrecliente;
    cout<<"Numero del cliente: ";
    cin>>numerocliente;
    cout<<"\nSin equipaje descuento del 10 por ciento";
    cout<<"\ncosto anterior: "<<costo;
    Costo=costo*.9;
    cout<<"\ncosto con descuento: "<<Costo;
}
void Clienteempleado::Calculaboleto(float costo){
    cout<<"Nombre del cliente empleado: ";
    cin>>Nombrecliente;
    cout<<"Numero del cliente empleado: ";
    cin>>Numeroempleado;
    cout<<"\nEmpleado 30 por ciento de descuento\n";
    cout<<"\ncosto anterior: "<<costo;
    Costo=costo*.7;
    cout<<"\ncosto con descuento: "<<Costo;
}
void Clienteconequipaje::Calculaboleto(float costo){
    Costo=costo;
    cout<<"Nombre del cliente: ";
    cin>>Nombrecliente;
    cout<<"RFC del cliente: ";
    cin>>rfc;
}
void Aerolineas::Calculaboleto(){
    int a;
    Destino=0;
    while(Destino!=1256&&Destino!=2565&&Destino!=1278&&Destino!=4585&&Destino!=3698){
        system("cls");
        tabla();
        cout<<"\n\nIngrese numero de vuelo: ";
        cin>>Destino;
        if(Destino==1256){
            cout<<"\nDestino: Cancun\n";
            Estado="Cancun";
            Costo=4285.25;
        }
        if(Destino==2565){
            cout<<"\nDestino: Monterrey\n";
            Estado="Monterrey";
            Costo=3859.36;
        }
        if(Destino==1278){
            cout<<"\nDestino: Guadalajara\n";
            Estado="Guadalajara";
            Costo=2156.36;
        }
        if(Destino==4585){
            cout<<"Destino: Chihuahua";
            Estado="Chihuahua";
            Costo=3258.00;
        }
        if(Destino==3698){
            cout<<"Destino: Veracruz";
            Estado="Veracruz";
            Costo=1256.25;
        }
    }
    while(a!=1&&a!=2&&a!=3){
        system("cls");
        cout<<"\nSe selecciono el vuelo: "<<Destino<<"\n";
        cout<<"\nTipo de cliente:\n1. Con Equipaje\n2.Sin Equipaje\n3. Empleado\n\n";
        cin>>a;
    }
        switch(a){
            case 1:{
                Clienteconequipaje x;
                x.Calculaboleto(Costo);
                x.MuestraDatos();
                MuestraDatos();
            }
            break;
            case 2:{
                Clientesinequipaje y;
                y.Calculaboleto(Costo);
                y.MuestraDatos();
                MuestraDatos();
            }
            break;
            case 3:{
                Clienteempleado z;
                z.Calculaboleto(Costo);
                z.MuestraDatos();
                MuestraDatos();
            }
            break;
           default:
               cout<<"opcion no valida";
          break;
        } 
}
void Clienteconequipaje::MuestraDatos(){
    cout<<"\n\nNombre del cliente: "<<Nombrecliente;
    cout<<"\nRFC del cliente: "<<rfc;
    cout<<"\nCosto: "<<Costo;
}
void Clienteempleado::MuestraDatos(){
    cout<<"\n\nNombre del cliente empleado: "<<Nombrecliente;
    cout<<"\nNumero del cliente empleado: "<<Numeroempleado;
    cout<<"\nCosto: "<<Costo;
}
void Clientesinequipaje::MuestraDatos(){
    cout<<"\n\nNombre del cliente: "<<Nombrecliente;
    cout<<"\nNumero del cliente: "<<numerocliente;
    cout<<"\nCosto: "<<Costo;
}
void Aerolineas::MuestraDatos(){
    cout<<"\nDestino: "<<Estado;
    cout<<"\nNumero de vuelo: "<<Destino;
}
int main()
{
  Aerolineas s;
  s.Calculaboleto();
}
