#include <iostream>
using namespace std;


int funcao (int base, int expoente){
	int r = 1;
	while (expoente > 0){
		r *= base;
		expoente --;
}
	return r;
}
int main(){
	int base, expoente;
	cin >> base >> expoente;
	
	cout << funcao(base,expoente);

    return 0;
}




*/ implmente uma funcao que recebe dois numros inteiros a e b como parametros e calcule a potencia
se uilizar a biblioteca matematica cmath. a leitura dos dados de entrada e a escrita do resulado
devem ser realizadas na funcao principal */
