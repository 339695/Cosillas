void troselebbub(int descend[], int TAM){
	for(int i=0;i<TAM;i++){
		for(int j=0;j<TAM-1;j++){
			if(descend[j]<descend[j+1])swap(descend[j],descend[j+1])
		}
	}
	for(auto u:descend)cout<<u<<"\t";
	}
}