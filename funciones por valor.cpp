#include <bits/stdc++.h>
using namespace std;
int powtencia(int x){
	x=x*x;
	return x;
}
int div(int xp){
	xp=(xp/2);
	return xp;
}
int res(int xd){
	xd=xd-10;
	return xd;
}
int main(){
	int x,xp,xd,xr;
	cin>>x;
	xp=powtencia(x);
	xd=div(xp);
	xr=res(xd);
	cout<<xr;
	return 0;
}