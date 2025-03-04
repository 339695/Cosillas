#include <iostream>
#define TOT 12
using namespace std;
enum Op{ENE=1,FEB,MAR,ABR,MAY,JUN,JUL,AGO,SEP,OCT,NOV,DIC};
char texto[][12]={{"Enero"},{"Febrero"},{"Marzo"},{"Abril"},{"Mayo"},{"Junio"},{"Julio"},{"Agosto"},{"Septiembre"},{"Octubre"},{"Noviembre"},{"diciembre"}};

int main(){
	int opc=0;
	for(int i=0;i<TOT;i++){
		cout<<texto[i]<<endl;
	}
	cout<<"escirbe una seleccion del 0 al 12 :---------------D :";
	cin>>opc;
	switch(opc){
		case 1:cout<<texto[ENE-1];break;
        case 2:cout<<texto[FEB-1];break;
        case 3:cout<<texto[MAR-1];break;
        case 4:cout<<texto[ABR-1];break;
        case 5:cout<<texto[MAY-1];break;
        case 6:cout<<texto[JUN-1];break;
        case 7:cout<<texto[JUL-1];break;
        case 8:cout<<texto[AGO-1];break;
        case 9:cout<<texto[SEP-1];break;
        case 10:cout<<texto[OCT-1];break;
        case 11:cout<<texto[NOV-1];break;
        case 12:cout<<texto[DIC-1];break;
        default:cout<<"opcion no valida";break;
        
	}
	return 0;
}