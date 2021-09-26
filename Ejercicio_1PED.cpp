#include "iostream"
using namespace std;

int CalcularMCM(int, int);

int CalcularMCM(int Maximo, int Minimo)
{
    if(Minimo == 0) return Maximo;
    return CalcularMCM(Minimo, Maximo%Minimo);
}

int main()
{
    system("cls");
    int Maximo=0;
    int Minimo=0;
    cout<<"MCM"<<endl;
    cout<<"Ingrese el Maximo como un multiplo: ";
    cin>>Maximo;
    cout<<"Ingrese el Minimo como un multiplo: ";
    cin>>Minimo;
    CalcularMCM(Maximo, Minimo);

    system("cls");
    cout<<"El MCM es: "<<CalcularMCM(Maximo, Minimo)<<endl;


    return 0;
}
