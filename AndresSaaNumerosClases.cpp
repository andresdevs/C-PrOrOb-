//Nombre:	RAUL ANDRES SAA ESTUPIï¿½AN
//Codigo: 	20171578087
//Curso   	301
/*Enunciado: Ejercicio 2.: Haga un programa en C que lea dos números enteros (m,n), hallar la sumatoria desde 'm' hasta 'n', 
halle la cantidad de números pares y diga cuáles son, halle la cantidad de números impares y diga cuáles son, diga  el total de números 
desde 'm' hasta 'n'. (eje. m= 3 y n = 6. la sumatoria desde 3 hasta 6  es = 18, hay dos números pares (4 y 6), 
hay dos números impares (3 y 5) y hay en total 4 números entre 3 y 6.*/
#include <iostream>
#include <stdlib.h>
using namespace std;
class numero{
	private:
		int m,n,conta=0,sumatoria,par=0,impar=0; //Declaracion variables
	public: 
			void entrada(void); //Declaracion de metodos que no reciben datos
			void proceso(void); 
			void salida(void); 
};
// :: operador de resolucion de ambito
int main (){
	numero programa;
    programa.entrada(); //invocacion del metodo entrada
    programa.proceso(); //invocacion del metodo proceso
    programa.salida(); 
	return 0;
}
void numero::entrada(void){
	cout<< "Ingrese un numero de partida: ";
	cin>>m;
	cout<< "Ingrese un numero de llegada: ";
	cin>>n;	
}
void numero::proceso(void){
	if(m<=n){
		for(int i=m;i<=n;i++){
			conta=conta+1;
			if(i%2==0 && i!=0){
				cout<<"\t"<<i<<" es par."<<endl;
			}else{
				cout<<"\t"<<i<<" es impar."<<endl;
			}	
		}		
	}else{
		for(int i=n;i<=m;i++){
			conta=conta+1;
			if(i%2==0 && i!=0){
				cout<<"\t "<<i<<" es par."<<endl;
			}else{
			cout<<"\t "<<i<<" es impar."<<endl;
			}
		}
	}
	if (m<=n){
		for(int i=m;i<=n;i++){
			if(i%2==0 && i!=0){
				par=par+1;
			}else{
				impar=impar+1;				
			}	
		}	
	}else{
		for(int i=n;i<=m;i++){
			if(i%2==0 && i!=0){
				par=par+1;
			}else{
				impar=impar+1;				
			}	
		}
	}
	if (m<=n)	{
		for(int i=m;i<=n;i++){
			sumatoria=sumatoria+i;
		}
	}
	else{
		for(int i=n;i<=m;i++){
			sumatoria=sumatoria+i;
		}
	}	
}
void numero::salida(void){
	if(m<=n){
		cout<<"\nLos datos ingresados son: "<<m<<" y "<<n<<".\n"<<endl;
		cout<<"\nTotal numeros desde "<<m<<" al "<<n<<" : "<<conta<<"."<<endl;	
		cout<<"\nSumatoria entre "<<m<<" y "<<n<<" : "<<sumatoria<<"."<<endl;
	}else{
			cout<<"\nLos datos ingresados son: "<<n<<" y "<<m<<".\n"<<endl;
			cout<<"\nTotal numeros desde "<<n<<" al "<<m<<" : "<<conta<<"."<<endl;	
			cout<<"\nSumatoria entre "<<n<<" y "<<m<<" : "<<sumatoria<<"."<<endl;
	}
	cout<<"\nTotal numeros pares : "<<par<<"."<<endl;
	cout<<"Total numeros impares : "<<impar<<"."<<endl;	
}

