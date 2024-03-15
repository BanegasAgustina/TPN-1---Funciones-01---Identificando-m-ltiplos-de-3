#include <bits/stdc++.h>
using namespace  std ;

bool EsMultiplode3 (int n);

int main(){
int num;
string msj ="no es multiplo";
cout<<"ingreese un numero:  ";
cin>>num;

if(EsMultiplode3 (num)){
	msj="es multiplo";
}
	cout<<msj;
	return 0;
}
bool EsMultiplode3 (int n){
	return n%3==0;
}