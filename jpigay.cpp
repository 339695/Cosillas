#include <bits/stdc++.h>
using namespace std;
int main(){
	int i,totalCalif;
	float calif,suma,prom;
	cout<<"dame el total de calificaciones\n";
	cin>>totalCalif;
	i=1;
	while(i<=totalCalif){
		cout<<"dame la calificacion\n";
		cin>>calif;
		suma=suma+calif;
		i++;
	}
	prom=(suma/totalCalif);
	cout<<"tu promedio es: "<<prom<<endl;
	return 0;
}