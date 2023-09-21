#include <iostream>
#include <fstream> 

using namespace std;

int main(){

	string palavra;
	int n1, n2;
	ifstream ler ("notas");
	
	
	while (ler >> palavra >> n1 >> n2){
	
	
	cout << palavra << " " << n1 + n2<<endl;
}
return 0;


}
