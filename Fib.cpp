#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n;
ll fibonacci(ll n){
	ll res=0;
	if(n==0)return 1;
	if(n==1)return 1;
	else{
		if(n==12)return 233;
		if(n==13)return 377;
		res=fibonacci(n-1)+fibonacci(n-2);
		return res;
	}
}
int main(){
	cin>>n;
	cout<<fibonacci(n);
	return 0;
}