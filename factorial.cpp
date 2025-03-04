/*Factorial         04/03/2025
Alejandro Gonzalez Garcia - Hector Alejandro Cuevas Gonzlez
Estructura de datos */
#include <bits/stdc++.h>
using namespace std;
int n;
long long fact_it(int);
long long fact_re(int);
int main(){
    int n;
    cout<<"ingrese un numero: \n";
    cin>>n;
    cout<<"El factorial de "<<n<<" es: \n";
    cout<<"Factorial con iterador: "<<fact_it(n)<<"\n";
    cout<<"Factorial con recursividad: "<<fact_re(n)<<"\n";
    return 0;
}
long long fact_it(int n){
    long long fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
long long fact_re(int n){
    if(n==0||n==1){
        return 1;
    }
    return n*fact_re(n-1);
}