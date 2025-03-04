#include <bits/stdc++.h>
using namespace std;
int main(){
	float x,y,z;
	cout<<"dame el valor de x";
	cin>>x;
	y=(x+5)/(2*(x+1));
	z=(pow(y,2)+(x*(x-2*y)));
	cout<<z;
	return 0;
}