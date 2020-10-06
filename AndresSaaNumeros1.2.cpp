//Nombre:	RAUL ANDRES SAA ESTUPI�AN
//Codigo: 	20171578087
//Curso   	301
/*Enunciado: Ejercicio 2.: Haga un programa en C que lea dos n�meros enteros (m,n), hallar la sumatoria desde 'm' hasta 'n', 
halle la cantidad de n�meros pares y diga cu�les son, halle la cantidad de n�meros impares y diga cu�les son, diga  el total de n�meros 
desde 'm' hasta 'n'. (eje. m= 3 y n = 6. la sumatoria desde 3 hasta 6  es = 18, hay dos n�meros pares (4 y 6), 
hay dos n�meros impares (3 y 5) y hay en total 4 n�meros entre 3 y 6.*/
#include <iostream>
#include <stdlib.h>
using namespace std;

void proceso(); 
void entrada(); 
void salida(); 
int m,n,conta=0,sumatoria,par,impar;

int main (){
	cout<< "Ingrese un numero de partida: ";
	cin>>m;
	cout<< "Ingrese un numero de llegada: ";
	cin>>n;
	if(m<=n){
		cout<<"\nLos datos ingresados son: "<<m<<" y "<<n<<".\n"<<endl;
	}else{
			cout<<"\nLos datos ingresados son: "<<n<<" y "<<m<<".\n"<<endl;
	}
	entrada();
	proceso();	
	salida();
	return 0;
}
void entrada(){
	if(m<=n){
		for(int i=m;i<=n;i++){
			conta=conta+1;
			if(i%2==0 && i!=0){
				cout<<i<<" es par."<<endl;
			}else{
				cout<<i<<" es impar."<<endl;
			}	
		}
		cout<<"\nTotal numeros desde "<<m<<" al "<<n<<" : "<<conta<<"."<<endl;	
	}else{
		for(int i=n;i<=m;i++){
			conta=conta+1;
			if(i%2==0 && i!=0){
				cout<<"\t "<<i<<" es par."<<endl;
			}else{
			cout<<"\t "<<i<<" es impar."<<endl;
			}
		}
		cout<<"\nTotal numeros desde "<<n<<" al "<<m<<" : "<<conta<<"."<<endl;
	}
}
void proceso(){
	if (m<=n){
		for(int i=m;i<=n;i++){
			if(i%2==0 && i!=0){
				par=par+1;
			}else{
				impar=impar+1;				
			}	
		}
	cout<<"Total numeros pares : "<<par<<"."<<endl;
	cout<<"Total numeros impares : "<<impar<<"."<<endl;
	}else{
		for(int i=n;i<=m;i++){
			if(i%2==0 && i!=0){
				par=par+1;
			}else{
				impar=impar+1;				
			}	
		}
	cout<<"Total numeros pares : "<<par<<"."<<endl;
	cout<<"Total numeros impares : "<<impar<<"."<<endl;
	}
}
void salida(){
	if (m<=n)	{
		for(int i=m;i<=n;i++){
			sumatoria=sumatoria+i;
		}
		cout<<"\nSumatoria entre "<<m<<" y "<<n<<" : "<<sumatoria<<"."<<endl;
	}
	else{
		for(int i=n;i<=m;i++){
			sumatoria=sumatoria+i;
		}
		cout<<"\nSumatoria entre "<<n<<" y "<<m<<" : "<<sumatoria<<"."<<endl;
	}		
}

