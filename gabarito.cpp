#include <iostream>
using namespace std;

//a b c d e gabarito
// a d b c d a v c d aluno

int pontos (char g[], char a[], int tam){
	int i, acertos = 0;
	for(i = 0; i < tam; i++){
		if (a[i], g[i]){
			acertos++;
		
		}	
	}
	return acertos;
}

int main(){
	
int tam = 10, i;
char gabarito[tam], aluno[tam];
int respostas;

for(i = 0; i < tam; i++)
	cin >> gabarito[i];
	
for(i = 0; i < tam; i++)
	cin >> aluno[i];
	if(respostas = gabarito[i]){
		cout << "acertou " << endl;
	}else{
		cout << "reprovado" << endl;
	}


return 0;
}
