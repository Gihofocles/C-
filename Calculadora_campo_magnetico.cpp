#include <iostream>
#include <iomanip>

using namespace std;
double a=0;
double b=0;
double c=0;
double B=0;
double u0=.00000125663;
double L1=0;
double L2=0;
double F=0;
double i=0;
double N=0;
double g=0;
double F1=0;
int main() {
    double bajo = 0.0, alto = 10000.0, ad;
    char response;
    const double precision = 0.00000000001;

    cout << "Introduce Longitud del entrehierro en mm: ";
    cin >> L2;
    L2=L2/1000;
    cout << "Introduce Longitud del entrehierro en m: ";
    cin >> L1;
    cout << "Introduce la corriente en mA: ";
    cin >> i;
    i=i/1000;
    cout << "Introduce el numero de espiras: ";
    cin >> N;

    cout << "\nPara B=(a*H)/(b+cH)";
    cout << "Introduce valor de a: ";
    cin >> a;
    cout << "Introduce valor de b: ";
    cin >> b;
    cout << "Introduce valor de c: ";
    cin >> c;

    F=N*i;
    g=F;
    while ((alto - bajo) > precision) {
        B = (bajo + alto) / 2.0;

        F1=(L1*((B*b)/(c-a))) + (L2*(B/u0));

        if(F1 > g){
            alto = B;
        }
        else if(F1 < g){
            bajo = B;
        }
        else if(F1 == g){
            cout << "El campo B es: " << fixed << setprecision(5) << B << endl;
            cout << "\nF aproximada es: " << fixed << setprecision(5) << F1 << endl;
            system("pause");
            cout << "\n\n";
            break;
        }
    }

    if ((alto - bajo) <= precision) {
        B = (bajo + alto) / 2.0;
        cout << "\nEl campo B es: " << fixed << setprecision(5) << B << endl;
        cout << "F aproximada es: " << fixed << setprecision(5) << F1 << endl;
        cout << "\n\n";
        system("pause");
    }

    return 0;
}