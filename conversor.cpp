#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main(){
	
    int hora, min,sec;
    ofstream saida ("saida.txt"); 
    cin >> hora;
    cin >> min;
	sec = 60;  
	
   saida << hora * 60 << endl;
   saida << hora * 60 + min << endl;
   saida <<(hora * 60 + min) * sec << endl;
      
   
    return 0;
}
