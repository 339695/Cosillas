#include <stdio.h>
#include <iostream>
using namespace std;
 
int main()
{
	int rondas;
	cin >> rondas;
	string partidas;
	cin >> partidas;
	int Danik=0;
	int Anton=0;
	
	for (int i=0; i<rondas;i++){
	    if (partidas[i] =='A'){
	        Anton ++;
	        
	    }else if (partidas[i] == 'D'){
	        Danik++;
	    }
	}
	if (Anton > Danik){
	    cout << "Anton";
	} else if (Danik > Anton){
	    cout << "Danik";
	}else {
	    cout << "Friendship";
	}
	
	
    return 0;
}