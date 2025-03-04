#include <iostream>
using namespace std;
void solve(long long n){
    cout<<n<<" "; 
    if(n<=1)return;
    if(n%2==0)solve(n/2);
    else solve(n*3+1);
}
long long pedir(){
    string input;
    cout<<"dame el num: ";
    cin>>input;
    long long num=0;
    bool entero=true;
    for(char c:input) {
        if(c<'0'||c>'9'){
            entero=false;
            break;
        }
    }
    if(entero) {
    long long num=stoll(input);
    if(num>0)return num;
}
    cout<<"que sea valido\n";
    return pedir();
}
int main() {
    long long n=pedir();
    solve(n);
    return 0;
}
