suma en un arreglo
#include<bits/stdc++.h>
using namespace std;
int main(){
	int A[100];
	int N;
	int suma = 0;
	
	cout<<"Ingrese N:"<<endl;
	cin >> N;
	cout<<"Ingrese numeros.."<<endl;
	for(int i=0;i<N;i++){
		cin >> A[i];
		suma+= A[i]	;
	}
	cout<<"La suma es:"<< suma;
	return 0;
}
