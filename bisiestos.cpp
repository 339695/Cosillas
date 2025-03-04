#include <bits/stdc++.h>
using namespace std;
void puticarlos(){
	int n;
	cin>>n;
	if(n%4==0){
		if(n%100==0){
			if(n%400==0){
				cout<<"29 ";
			}
			else{
				cout<<"28 ";
			}
		}
		else{
			cout<<"29 ";
		}
	}
	else{
		cout<<"28 ";
	}
	return;
}
int main(){
	int t;
	t=4;
while(t--){
	puticarlos();
	
}
	return 0;
}