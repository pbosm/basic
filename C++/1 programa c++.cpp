
//coment�rio de linha

/*
coment�rio de 
multiplas
linhas

Vari�veis:
inteiro: int
real: float
caracter: char
cadeia: string
Obs.: a regra para indetifica��o das vari�veis � a mesma que no Portugal Studio

*/

#include<iostream>
using namespace std;

main()
{
	setlocale(LC_ALL,"portuguese");
	int n1,n2;
	float M;
	
	cout<<"Digite o primeiro n�mero: ";    // escreva("Digite o primeiro n�mero: ")
	cin>>n1;                              //  leia(n1)
	cout<<"Digite o segundo n�mero: ";
	cin>>n2;
	
	M = (n1 + n2) / 2.0;
	
	cout<<"A m�dia � "<<M<<"\n"<<endl;
	
	system("pause");
	
}
