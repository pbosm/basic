#include<iostream>
using namespace std;

main()
{
	setlocale(LC_ALL,"portuguese");	
	// declara��o de um vetor (vari�vel composta homog�nea - unidimensional)
	int numero[5];
	
	// exemplo de atribui��o
	numero[0]=7;
	numero[3]=numero[0]*5;
	
	//entrada de dado
	cout<<"Digite um valor: "; cin>>numero[1];
	
	// saida
	cout<<numero[0]<<" "<<numero[1]<<" "<<numero[2]<<" "<<numero[3]
	<<" "<<numero[4];
	

}
