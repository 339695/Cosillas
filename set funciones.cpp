#include <iostream>
#include <set>
using namespace std;
void conjunto(){
	set<int> conjunto {5,3,8,1,3,7};
	for(auto u:conjunto){
		cout<<u<<"\t";
	}
}
void busqueda(){
	set<string> frutita {"apple","banana","cherry"};
	frutita.find("banana");
	if(frutita.find("banana")!=frutita.end()){
		cout<<"Encontrado\n";
	}
	else{
		cout<<"No encontrado\n";
	}
}
void eliminacion(){
	set<int> eliminao{10,20,30,40,50};
	eliminao.erase(30);
	for(auto u:eliminao){
		cout<<u<<"\t";
	}
	cout<<endl;
}
void multiplicacion(){
	set<int> multi{15,5,25,10,20};
	set<int> result;
	for(auto u:multi){
		result.insert(u*2);
	}
	for(auto u:result){
		cout<<u<<"\t";
	}
}
int main(){
	conjunto();
	busqueda();
	eliminacion();
	multiplicacion();
	
	
	return 0;
}