/*Autor: Oscar Eduardo Fletes Ixta, Realizado: 17/02/22
	programa que pida cualquier cantidad de numeros y los sume
	el programa ternimara de leer numeros cuando se introduce un 0.
	Programa en lenguaje c que muestra el uso de scanf, y el uso del ciclo while
	Autor: Oscar Eduardo Fletes Ixta
	Escuela: UVM Campus Lomas Verdes
	Materia : Programcion Estructurada
	CICLO: 01/2022

	Programa en lenguaje c que muestra el uso de:
		-Declaracion de variables 
		-Variables del tipo int, float
		-scanf
		-Operaciones aritmeticas 
		-Uso del ciclo while
		-printf para monstrar los valroes de las variables

	Objetivo:
	Mostrar el uso de variables enteras y flotantes, como declararlas, pedirlas por teclado, 
	usar el ciclo while, realizar operaciones aritmeticas e imprimirla.

	Breve descripcion:
	El programa inicia el ciclo while, despues pide como entrada 1 variable de tipo int (valor del numero),
	El programa pide cualquier cantidad de numeros y los sume, el programa terminara de leer
	numeros cuando se introduce un 0. 
	*/
	
#include<stdio.h>

int main (){
	//Variables
	float numero=1, suma=0; //variable numero entero
	int i=1; //variable numero entero
	//Proceso
	while(numero!=0){ //ciclo while que valida, que mientras numero sea diferente de 0 haga todo el ciclo
		//Entrada 
		printf("Introduce el valor del numero %d: ",i); //imrpime mensaje
		scanf("%f",&numero); //lee el numero insertado por el teclado
		suma=suma+numero; //Ecuacion
		i++; //contador 
		//Salida
		printf("La suma es %.2f\n",suma); //imrpime la salida de la suma		
	}
	//!=0 diferente de 0
	return 0;
}
