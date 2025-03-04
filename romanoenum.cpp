/*escribe un codigo que reciba un numero en decimal y lo retorne en romano haciendo uso de una enumeracion*/
#include <iostream>
using namespace std;
string conversionromana(int num){
    enum RomanNumeral{M=1000,CM=900,D=500,CD=400,C=100,XC=90,L=50,XL=40,X=10,IX=9,V=5,IV=4,I=1};
    RomanNumeral values[]={M,CM,D,CD,C,XC,L,XL,X,IX,V,IV,I};
    string roman[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    string result="";
    for(int i=0;i<13;i++){
        while(num>=values[i]) {
            num-=values[i];
            result+=roman[i];
        }
    }
    return result;
}

int main(){
    int num;
    cout<<"Ingrese un numero en decimal: ";
    cin>>num;
    if(num<=0||num>3999){
        cout<<"Numero no valido";
    }
    else{
        cout<<"El numero en romano es: "<<conversionromana(num);
    }
    return 0;
}