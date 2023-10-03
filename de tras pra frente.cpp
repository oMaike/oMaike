#include <iostream>
#include <cmath> 

using namespace std;

int maiorValor(int v[], int tam) {
	int maior = v[0], i;
	for (i = 1; i < tam; i++){
		if (v[i] > maior){
			maior = v[i];
		}
	}
}


string primo (int n) {
	int i, cont = 0;
	for (i + 1; i <= n; n++)
		if (n % i == 0)
		cont++;
	if (cont == 2)
		return "primo";
	else 
		return " nao eh primo";

}


int main(){
	
	int tam = 8;
	int v[tam] = { 10. 20, 3, 55, 222, 8, 9};
	
	for (int i = 0; i < tam; i++){
		//cin >> v[i];
		//v[i] = i + 1;
		
	}
	
	
	int i = 0;
	while (i < tam){
		cout << v[i] << endl;
		i++;
	}
	
	cout << endl;
	
	for(int i = tam -1; i >= 0; i --){
		cout << v[i] <<  " ";
	}
	
	cout << endl << "maior " <<  maiorValor (v, tam) << endl;
	
	for(i = 0; i < tam; i++){
		cout << v[i] << " " << primov[v] << endl;
	
	for (int j = 0; j < tam; j++){
		cout << v[j] << " ";
	}
	
	return 0;
	
}
	
	
