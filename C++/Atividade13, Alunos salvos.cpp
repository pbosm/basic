#include<iostream>
using namespace std;

/*Fa�a um programa para ler o nome do aluno e suas duas notas para uma turma de 5 alunos.
Ap�s a entrada dos dados, gere um relat�rio geral apresentando todos os dados solicitados na entrada. 
Para isso, os dados de entrada dever�o ser vetores.
Desafio (facultativo): na apresenta��o do relat�rio incluir o c�lculo da m�dia.*/


main()
{
	setlocale(LC_ALL,"portuguese");	
	float Soma=0, Media, n1[5], n2[5];
	int i;
	string Aluno[5];
	

	for (i=0; i<5; i++)
	{
		cout<<"Aluno: "; 
		cin>>Aluno[i];	
		cout<<"Digite a 1� nota: "; 
		cin>>n1[i];
		cout<<"Digite a 2� nota: ";
		cin>>n2[i];
		cout<<endl;	
		
	}
	
	for (i=0; i<5; i++) 
	{
		Soma = n1[i] + n2[i];
		Media = Soma / 2;		
		cout<<Aluno[i]<<" Sua 1� nota �: "<<n1[i]<<", Sua 2� �: "<<n2[i]<<", Sua M�dia �: "<<Media<<endl;
		// poderia ser, cout<<Aluno[i]<<" Sua 1� nota �: "<<n1[i]<<", Sua 2� �: "<<n2[i]<<", Sua M�dia �: "<<(n1[i]+n2[i])/2<<endl
	}
}

