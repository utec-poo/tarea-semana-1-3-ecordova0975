#include <iostream>
using namespace std;

int opc=0;
double precio=0;
void Menu();
void Descuento();

void Menu(){
    cout<<"\t.:Menu:."<<endl;
    cout<<"1. Super Vip"<<endl;
    cout<<"2. Vip"<<endl;
    cout<<"3. Preferencial"<<endl;
    cout<<"4. General"<<endl;
    do{
        cout<<"Cual desea comprar?: "<<endl;cin>>opc;
    }while(opc<0 or opc>4);
    switch(opc){
        default: cout<<"Ingresa una opción valida";
        case 1: precio = 212; break;
        case 2: precio = 170; break;
        case 3: precio = 136; break;
        case 4: precio = 59; break;
    }
    cout<<"El precio por la opcion "<<opc<<" es de: S/ "<<precio;
}

void Descuento(){
    char dsc;
    do {
        cout << "\nDesea aplicar el descuento? (s/n)";cin>>dsc;
    }while(dsc!='s' && dsc!='S' && dsc!='n' && dsc!='N');
    if(dsc=='s' or dsc=='S'){
        precio*=0.8;
    }
}

int main(){
    Menu();
    Descuento();
    cout<<"El precio final es de: S/ "<<precio<<".";
    return 0;
}

