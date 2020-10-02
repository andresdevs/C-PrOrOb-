//Nombre:	RAUL ANDRES SAA ESTUPI�AN
//Codigo: 	20171578087
//Curso   	301
//Enunciado:Sumatoria y numeros pares e impares
#include <iostream>
#include <stdlib.h>
using namespace std;
void cuantospar_impar(); //Funci�n para saber cu�l n�mero es par y cu�l impar.
void par_impar(); //Funci�n para mostrar numeros pares e impares.
void mostrarsuma(); //Funci�n para mostrar la sumatoria desde "m" hasta "n" o al rev�s seg�n el orden ascendente.
int m,n,conta=0,sumatoria,par,impar;
/*Variables a usar: m= Primer numero,
					n= Segundo numero,
					conta= Guardar� la cantidad de numeros en pantalla desde "m" hasta "n" y viscersa,
					sumatoria= Guardar� la suma de los numeros entre "m" y "n".
					par= Guarda� numeros pares
					impar= Guardar� n�meros impares*/
int main (){
	cout<< "Ingrese un numero de partida: ";
	cin>>m;
	cout<< "Ingrese un numero de llegada: ";
	cin>>n;
	cout<<"\nLos datos ingresados son: "<<m<<" y "<<n<<".\n"<<endl;
	par_impar();
	cuantospar_impar();	
	mostrarsuma();
	return 0;
}
void par_impar(){
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
				cout<<i<<" es par."<<endl;
			}else{
			cout<<i<<" es impar."<<endl;
			}
		}
		cout<<"\nTotal numeros desde "<<n<<" al "<<m<<" : "<<conta<<"."<<endl;
	}
}
void cuantospar_impar(){
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
void mostrarsuma(){
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

