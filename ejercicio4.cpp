#include <iostream>

using namespace std;
int main(){
    int costo, costoFinal,costoIva;
    char op;
    cout<<"dame el precio de tu articulo: "<<endl;
    cin>>costo;
    
    if(costo>2000){
        costoFinal=costoFinal-(costoFinal*0.10);
        
        cout<<"tu producto es marca NOSY?  (s=si n=no)"<<endl;
        cin>>op;
        
        if(op=='s'){
            costoFinal=costoFinal-(costoFinal*0.05);
            costoIva=costoFinal*0.16;
            cout<<"tu precio final ya con iva es: "<<costoIva;
        }else if(op=='n'){
            costoFinal=costoFinal;
            costoIva=costoFinal*0.16;
            cout<<"tu precio final ya con iva es: "<<costoIva;
        }
        
    }else{
        cout<<"tu producto es marca NOSY?  (s=si n=no)"<<endl;
        cin>>op;
        
        if(op=='s'){
            costoFinal=costoFinal-(costoFinal*0.05);
            costoIva=costoFinal*0.16;
            cout<<"tu precio final ya con iva es: "<<costoIva;
        }else if(op=='n'){
            costoFinal=costoFinal;
            costoIva=costoFinal*0.16;
            cout<<"tu precio final ya con iva es: "<<costoIva;
        }
    }
 return 0;   
}