#include <iostream>
#include <fstream>

void imprime(int id, int sobreviveu, int classe, int nome, int idade){
	cout << id << "\t" << classe << "\t" << nome << "\t" << sexo << "\t" << endl;
}
using namespace std;
int main(){
		ifstream arquivo ("passageiros.csv");
		int total, id, idade, classe;
		string linha, nome, sobreviveu;
		char sexo, lixo;
		
		if(not(arquivo))
			cout << "Arquivo nao encontrado";
		else{
			arquivo >> total;
			cout << total << endl;
			arquivo.ignore();
			getline(arquivo, linha);
			cout << linha <<< endl;
			for(int i = 1; i <= total; i++){
				arquivo >> id;
				arquivo >> lixo;
				arquivo >> sobreviveu >> lixo;
				arquivo >> classe >> lixo;
				getline(arquivo, nome, ',');
				arquivo >> sexo >> lixo;
				arquivo >> idade;
				arquivo.ignore();
				
				imprime(id, sobreviveu, classe, nome, idade)
			}
		
	}
return 0;
}
