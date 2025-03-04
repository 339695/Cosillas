void conversion(int matriz[][COL],int vec[REN*COL]){
	int k=0;
	for(int i=0;i<REN;i++){
		for(int j=0;j<COL;j++){
				vec[k]=matriz[i][j];
				k++;	
			}
		}
	}
}
