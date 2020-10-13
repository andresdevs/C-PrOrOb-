//Nombre:	RAUL ANDRES SAA ESTUPINAN
//Codigo: 	20171578087
//Curso   	301
/*Enunciado: El costo de producción de una maleta es de $75.000;
 en materia prima se invierte el 38%, en mano de obra el 35%, en accesorios
 el 5%, en servicios el 15%; el valor restante son imprevistos que se presentan en cada producción.
  calcule el costo total de producción de un lote de 125 maletas, el costo total discriminado 
  por cada concepto (materia prima, mano de obra, etc); si cada maleta se vende a razón de $125.000,
  calcule el valor de la venta total, el valor del impuesto a pagar, y la utilidad obtenida*/
#include "iostream" 
using namespace std;
class maleta{
	private:
		float iva=0.19;
		char marca[30], color[12], material[30]; //declaración de variables en private siempre
		int precio=125000,manoobra,costoPROD=75000,materiaprima,acc,servicios,imprevistos,costoTP,costoTMP,costoTMO,costoTACC,costoTI,costoTS,ventaT,impuesto,utilidad;
	public:
		void entrada(void); //declaración de métodos que no reciben ni retornan
		void proceso(void);
		void salida(void);
}/*lista de objetos aquí (vacía)*/;
void maleta::entrada(void){  //Definición del método de entrada
	cout<<"Digite marca "<<endl;
	gets(marca);
	cout<<"Digite color "<<endl;
	gets(color);
	cout<<"Digite material "<<endl;
	gets(material);
//	cout<<"Digite precio "<<endl;
//	cin>>precio;
}
void maleta::proceso(void){ //Definicion del metodo proceso
	materiaprima=(costoPROD*0.38);
	manoobra=(costoPROD*0.35);
	acc=(costoPROD*0.05);
	servicios=(costoPROD*0.15);
	imprevistos=(costoPROD*0.07);
	costoTMP=materiaprima*125;
	costoTMO=manoobra*125;
	costoTACC=acc*125;
	costoTI=imprevistos*125;
	costoTS=servicios*125;
	costoTP=125*costoPROD;
	ventaT=125*precio;
	impuesto=(ventaT*iva);
	utilidad=(ventaT-impuesto-costoTP);			
}
void maleta::salida(void){  //Definición del método de salida
	cout<<"\nMarca : "<<marca<<endl;
	cout<<"Color : "<<color<<endl;
	cout<<"Material : "<<material<<endl;
	cout<<"Precio : $ "<<precio<<endl;
	cout<<"\nCosto produccion : - - - - - - - $ "<<"  "<<costoPROD<<endl;
	cout<<"Costo total materia prima : - - -$ "<<costoTMP<<endl;	
	cout<<"Costo total mano de obra : - - - $ "<<costoTMO<<endl;	
	cout<<"Costo total accesorios : - - - - $ "<<" "<<costoTACC<<endl;	
	cout<<"Costo total imprevistos : - - - -$ "<<" "<<costoTI<<endl;	
	cout<<"Costo total servicios : - - - - -$ "<<costoTS<<endl;	
	cout<<"__________________________________________ "<<endl;
	cout<<"Costo total produccion : - - - - $ "<<costoTP<<endl;	
	cout<<"__________________________________________ "<<endl;	
	cout<<"\nTotal ventas : - - - - - - $ "<<ventaT<<endl;	
	cout<<"Impuesto a pagar : - - - - $ "<<" "<<impuesto<<endl;	
	cout<<"Utilidades : - - - - - - - $ "<<" "<<utilidad<<endl;	
}
int main(){
	maleta morral; //declarando objetos para (maleta)
	morral.entrada(); //invocacion metodo de entrada
	morral.proceso(); //invocacion metodo de proceso
	morral.salida(); //invocacion metodo de salida
    system("pause");
    return 0;
}
