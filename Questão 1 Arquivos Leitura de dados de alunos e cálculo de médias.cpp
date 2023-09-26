#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main (){

    ifstream entrada("entrada.txt");
    ofstream saida("saida.txt");

    if (!entrada.is_open()){
        cerr << "Erro ao abrir o arquivo de entrada" << endl;
        return 1;
    }
    int numAlunos;
    entrada >> numAlunos;

    for (int i = 0; i < numAlunos; i++){
        string nome;
        double nota1, nota2;

        entrada >> nome >> nota1 >> nota2;

        double media = (nota1 + nota2) / 2.0;

        if (media < 7.0){
            saida << nome << endl;
        }
    }
    entrada.close();
    saida.close();

    return 0;
}