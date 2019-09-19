#include <iostream>
using namespace std;

int main(){
	char letter;
	int valor;
	cout<<"Ingrese la casilla: ";cin>>letter;cin>>valor;
	if(letter<97 or letter>104)
		cout<<"La casilla no existe en el tablero";
	else{
		if(letter==97||letter==99||letter==101||letter==103){
			if(valor%2!=0)
				cout<<"La casilla "<<letter<<valor<<" es blanca";
			else
				cout<<"La casilla "<<letter<<valor<<" es negra";
		}
		else{
			if(valor%2==0)
				cout<<"La casilla "<<letter<<valor<<" es blanca";
			else
				cout<<"La casilla "<<letter<<valor<<" es negra";
		}
	}
	return 0;
}
