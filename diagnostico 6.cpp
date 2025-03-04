void llenarrand(){
	vector<int> etza(MAX);
	srand(time(NULL));
	//se llena el vector
	for(int i=0;i<MAX;i++){
		etza[i]=1+rand%20;
	}
	//se escribe el vector
	for(int j=0;j<MAX;j++){
		cout<<etza[j]<<"\t";
	}
}