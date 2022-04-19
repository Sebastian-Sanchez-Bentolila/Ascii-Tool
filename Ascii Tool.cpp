/*
@Author: Sebastian Sanchez Bentolila
https://github.com/Sebastian-Sanchez-Bentolila

Ascii Tool
*/

//Modules
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

//prototypes
void presentacion();
int opcion_usuario();

//Main
int main()
{
    int numero, op_user;
    bool salir=true;
    char caracter;
    system("color 02");

    do
    {
        presentacion();
        op_user = opcion_usuario();

        switch (op_user)
        {
        case 1:
            cin.ignore();
            cout<<endl<<"Digite el caracter: ";
            cin>>caracter;
            cout<<endl<<"Su numero decimal es: "<<int(caracter)<<endl;
            break;

        case 2:
            cout<<endl<<"Digite el numero: ";
            cin>>numero;
            cout<<endl<<"Su caracter es: "<<char(numero)<<endl;
            break;

        case 3:
            salir = false;
            break;

        default:
            cout<<">Esa opcion no esta disponible"<<endl;
        }


    cout<<endl<<endl;
    system("pause");
    system("cls");

    }while(salir);

    return 0;
}

void presentacion()
{
    //Presentation of the program
    cout<<"\t\t\t\t Ascii Tool"<<endl;
    cout<<"\t\t\t\t************"<<endl<<endl<<endl;
}

int opcion_usuario()
{
    //User option. Feature List
    int n;

    cout<<"<1>. Caracter a decimal"<<endl;
    cout<<"<2>. Decimal a caracter"<<endl;
    cout<<"<3>. Salir"<<endl;
    cout<<"Opcion: ";
    cin>>n; cout<<endl;

    return n;
}
