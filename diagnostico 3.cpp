int minimo(vector<float> minimini){
	int min=minimini[0];
	for(int i=0;i<minimini.size();i++){
		if(minimini[i]<min)min=minimini[i];
	}
	return min;
}