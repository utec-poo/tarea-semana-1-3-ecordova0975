#include <iostream>
#include "Tipos.h"
using namespace std;

int Area();

int main(int,int) {

entero base=0, entero altura=0, entero area=0;
cout << "\ningrese la base:";
cin >> base;
cout << "\ningrese la altura:";
cin >> altura;
area = Area(base,altura);
cout << "\nEl area es: "<<area<<"."


// ToDO

  return 0;
}

int Area(int x,int y){
  return x*y;
