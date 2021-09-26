#include <iostream>

using namespace std;

void contarRec(int, int);

void contarRec(int i, int conteo)
{
    if(i < conteo){
        cout << i << endl;
        i = i + 1;
        
    }
    else if(conteo >= 1){
        cout << conteo << endl;
        conteo = conteo - 1;
    }
    contarRec(i, conteo);
}

int main(void)
{
    int conteo;

    cout << endl;
    system("cls");
    cout << "Ingrese el numero para el conteo: ";
    cin >> conteo;

    contarRec(1, conteo);

    return 0;
}

