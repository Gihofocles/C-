#include <iostream>

using namespace std;

class Entrenador{
    private:
        string Nombre;
        int Edad;
    public:
        Entrenador();
        void MostrarEntrenador();
};

class Nutriologo{
    private:
        string NombreNutriologo;
        string EstadoSalud;
        int Edad;
    public:
        Nutriologo();
        void MostrarNutriologo();
};

class Preparador{
    private:
        string NombrePreparador;
        string EstadoFisico;
        int Edad;
    public:
        Preparador();
        void MostrarPreparador();
};

class Equipo: public Entrenador, public Nutriologo, public Preparador{
    private:
        string NombreEquipo;
        int nintegrantes;
        int puntaje;
    public:
        Equipo();
        void Mostrar();
};

class Deporte: public Equipo{
    private:
        int a;
    public:
        Deporte();
        void MostrarDeporte();
};
Entrenador::Entrenador(){
    cout <<"Ingresa el nombre del entrenador: ";
    cin >>Nombre;
    cout <<"ingresa la edad del entrenador: ";
    cin >>Edad;
}

Nutriologo::Nutriologo(){
    cout <<"Nombre del nutriologo: ";
    cin >>NombreNutriologo;
    cout <<"Ingrese la edad del Nuriologo: ";
    cin >>Edad;
    cout <<"Como es el estado de salud del equipo: ";
    cin  >> EstadoSalud;
}

Preparador::Preparador(){
    cout <<"Nombre del Preparador: ";
    cin >>NombrePreparador;
    cout <<"Ingrese la edad del Preparador: ";
    cin >>Edad;
    cout <<"Como es el estado de rendimiento fisico del equipo: ";
    cin  >> EstadoFisico;
}
Equipo::Equipo(){
    cout <<"Nombre del Equipo: ";
    cin >>NombreEquipo;
    cout <<"Numero de integrantes: ";
    cin >>nintegrantes;
    cout <<"Puntaje de temporada pasada: ";
    cin >>puntaje;
}
Deporte::Deporte(){
    cout <<"\nEquipo a";
    Equipo a;
    cout <<"\nEquipo b";
    Equipo b;
    cout <<"\nEquipo c";
    Equipo c;
    cout <<"\nEquipo d";
    Equipo d;

    

}
void Entrenador::MostrarEntrenador(){
    cout <<"\nIngresa el nombre del entrenador: "<<Nombre;
    cout <<"\ningresa la edad del entrenador: "<<Edad;
}
void Nutriologo::MostrarNutriologo(){
    cout <<"\n\nNombre del nutriologo: "<<NombreNutriologo;
    cout <<"\nIngrese la edad del Nuriologo: "<<Edad;
    cout <<"\nComo es el estado de salud del equipo: "<<EstadoSalud;
}
void Preparador::MostrarPreparador(){
    cout <<"\nNombre del Preparador: "<<NombrePreparador;
    cout <<"\nIngrese la edad del Preparador: "<<Edad;
    cout <<"\nComo es el estado de rendimiento fisico del equipo: "<<EstadoFisico;
}
void Equipo::Mostrar(){
    MostrarEntrenador();
    MostrarNutriologo();
    MostrarPreparador();
    cout <<"\nNombre del Equipo: "<<NombreEquipo;
    cout <<"\nNumero de integrantes: "<<nintegrantes;
    cout <<"\nPuntaje de temporada pasada: "<<puntaje;
}
void Deporte::MostrarDeporte(){
    Mostrar();
}



int main(){
    Deporte x;
    x.MostrarDeporte();
}
