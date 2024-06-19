promedio
#include<bits/stdc++.h>
using namespace std;
int main(){
	int A[100];
	int N;
	float suma = 0;
	
	cout<<"Ingrese N:"<<endl;
	cin >> N;
	cout<<"Ingrese edades:"<<endl;
	for(int i=0;i<N;i++){
		cin >> A[i];
		suma+=A[i] ;
	}
	float promedio = suma/N;
	cout<<"El promedio es:"<<promedio;
	
	return 0;
}
