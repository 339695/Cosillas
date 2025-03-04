void operacionesVec(vector<int> v){
	int suma=0,min=v[0];
	float prom=0.0;
	for(int i=0;i<v.size();i++){
		suma+=v[i];
		if(v[i]<min)min=v[i];
	}
	prom=suma/v.size();
	cout<<"el minimo es: "<<min<<" el promedio es: "<<prom<<" el minimo es"<<min<<endl;
}