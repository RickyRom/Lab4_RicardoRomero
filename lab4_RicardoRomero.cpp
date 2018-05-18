#include <iostream>

using namespace std;

int*** crear(int);

void freeMatrix(int***, int);

int main() {
	
	int opcion;
	do{
		cout<<"Bienvenido al Menu de Opciones"<<endl;
		cout<<"1.- Ejer 1"<<endl;
		cout<<"2.- Ejer 2"<<endl;
		cout<<"3.- Ejer 3"<<endl;
		cout<<"4.- Salir"<<endl;
		cin>> opcion;
		switch(opcion) {
			
			case 1:
				break;
			case 2: 
				break;
			case 3:
				break;
			case 4:
				cout<<"TENGA UN BUEN DIA!"<<endl;
				break;	
		}

	}while(opcion != 3);
}

int*** crear(int n) {
	
	int*** tablero = new int** [n];
	for(int i = 0; i < n; i++) {
		tablero[i] = new int* [n];
	}

	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < n; j++) {
			tablero[i][j] = NULL;
		}
	}
	return tablero;
}

void freeMatrix(int*** matrix, int size) {
	if(matrix == NULL) {
		
		for(int i = 0; i < size; i++) {
			delete[] matrix[i];
			matrix[i] = NULL;
		}
		delete[] matrix;

		matrix = NULL;
		size = 0;
	}
}

void ejer2() {
	
}
