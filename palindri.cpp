#include<bits/stdc++.h>
using namespace std;
int main(){
    string input="",half="";
    int impares=0;
    char intermedio='\0';
    map<char,int>freq;
    cin>>input;
    for(char c:input){
        freq[c]++;
    }
    for(const auto&par:freq){
        if(par.second%2!=0)impares++;
        half+=string(par.second/2,par.first);
    }
    if(impares>1){
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }
    if(impares==1){
        for(const auto&par:freq){
            if(par.second%2!=0){
                intermedio=par.first;
            }
        }
        cout<<half<<intermedio;
        reverse(half.begin(), half.end());
        cout<<half<<"\n";
    } else { // Caso cuando todas las frecuencias son pares
        cout<<half;
        reverse(half.begin(), half.end());
        cout<<half<<"\n";
    }
    return 0;
}