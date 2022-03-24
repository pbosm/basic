/*
Fa�a um programa para ler N alunos (onde N � obtido no inicio) e M notas (onde M � obtido
no inicio do programa). Para cada aluino apresente a m�dia obtida.
Ao final apresente o rela�torio com o nome, as notas e m�dia de todos os alunos.
*/

#include<iostream>
using namespace std;
main()
{
	setlocale(LC_ALL,"portuguese");
	
	int N, M, l, c;
	cout<<"Quantidade de alunos: ";
	cin>>N;
	cout<<"Quantidade de notas : ";
	cin>>M;
	
	string nome[N];
	float notas[N][M], media[N], soma_notas=0;

	for(l=0; l<N; l++) //linha, entrada do aluno
	{
		cout<<"Nome do aluno: ";
		cin>>nome[l];
				
		for(c=0; c<M; c++) //colunas, entrada da notas
		{
			cout<<"Nota "<<c+1<<" : ";
			cin>>notas[l][c];
			soma_notas = soma_notas + notas[l][c]; 
		}		
			media[l] = soma_notas / M;
			soma_notas=0; //para n�o acumular a notas anteriores
	}

	cout<<endl<<"Relat�rio Geral"<<endl<<endl; //relatorio
	cout<<"Nome\tNota1\tNota2\tM�dia"<<endl;
	for(l=0; l<N; l++) //linha, saida 
	{
		cout<<nome[l]<<"\t";
				
		for(c=0; c<M; c++) //colunas, saida da notas
		{
			cout<<notas[l][c]<<"\t";
		}
		cout<<media[l]<<"\t"<<endl;		
	}	
}
