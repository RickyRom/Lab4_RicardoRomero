#include <iostream>

using namespace std;

int*** crearMatriz(int);

void freeMatrix(int***, int);

void printMatriz(int*** , int, int);

void ejer2();

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
				ejer2();
				break;
			case 3:
				break;
			case 4:
				cout<<"TENGA UN BUEN DIA!"<<endl;
				break;	
		}

	}while(opcion != 4);
}

int*** crearMatriz(int size) {
	
	int*** matriz = new int** [size];
	for(int i = 0; i < size; i++) {
		matriz[i] = new int*[3];
	}

	for(int i = 0; i < size; i++) {
		for(int j = 0; j < 3; j++) {
			matriz[i][j] = new int [size];
		}
	}
	return matriz;
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
	int gradpoli,a, valor;
	int size = 5;
	int*** mainmatrix = crearMatriz(size);

	cout<<"Ingrese el grado mas alto: "<<endl;
	cin>> gradpoli;
	cout<<"Ingrese a; "<<endl;
	cin>> a;

	for(int i = 0; i < gradpoli + 1; i++) {
		cout<<"Ingrese el valor de x^"<<i<<endl;
		cin>> valor;
		mainmatrix[0][0][i] = valor;
		valor = 0;
		mainmatrix[0][2][0] = mainmatrix[0][0][0];
		mainmatrix[0][1][1] = mainmatrix[0][2][0] * a;
		mainmatrix[0][2][1] = mainmatrix[0][0][1] + mainmatrix[0][1][1];
	}
	
	printMatriz(mainmatrix, gradpoli, a);


	
	
}

void printMatriz(int*** matrix, int size, int a) {
	for(int i = 0; i < size + 1; i++) {
		for(int j = 0; j < 3; j++) {
			for(int k = 0; k < size + 1; k++) {
				cout<<"["<<matrix[i][j][k]<<"]";
			}
				cout<<"|"<<a<<endl;
		}
		cout<<endl;
	}

}
