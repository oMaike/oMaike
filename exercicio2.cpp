#include <iostream>
using namespace std;


int funcao (int numero, int &anterior){
	anterior = numero -1;
	numero++;
	return numero +1;
}
int main(){
	
	int numero, a;
	cin >> numero;
	cout << &numero << " "<< &a << endl;
	cout << funcao(numero,a) << " " << a;
	return 0;
 	

    return 0;
}








//faca uma funcao que receba um numero inteio e retorna o programa principal
//o seu antecessor e seu sucessor
//exemplo de entrada:10
//exemplo:9, 11
