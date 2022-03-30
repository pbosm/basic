/*Fa�a um programa para ler o nome e o sal�rio bruto de N funcion�rios, onde N deve ser lido no in�cio do programa.
Para cada funcion�rio dever� ser informado:
- O desconto de INSS que � de 8% do sal�rio bruto;
- O desconto de imposto de renda (IR) que ser� de:
-- 0% (isento) para sal�rio bruto menor que R$1800;
-- 10% para sal�rio bruto maior ou igual a R$ 1800 e menor que R$ 3000;
-- 20% para sal�rio bruto maior ou igual a R$ 3000 e menor que R$ 5000; e
-- 30% para sal�rio bruto maior ou igual a R$ 5000.
- O sal�rio l�quido (sal�rio bruto menos os descontos).
Ap�s a entrada dos dados, gerar:
- Um relat�rio geral apresentando todos os dados: nome, sal�rio bruto, INSS, IR e sal�rio l�quido. Ao final deste relat�rio apresente os totais de: sal�rio bruto, INSS, IR e sal�rio l�quido;
- A m�dia salarial l�quida;
- Um relat�rio contendo o nome e o sal�rio l�quido dos funcion�rios que estejam abaixo da m�dia salarial l�quida; e
- O percentual de funcion�rio isentos de IR.
*/ 

#include<iostream>
using namespace std;
main()
{
	setlocale(LC_ALL,"portuguese");	
	int N, i, cont_zero=0, cont_dez=0, cont_vinte=0, cont_trinta=0;
		
	cout<<"Qual a quantidade de funcion�rios? "; 
	cin>>N;  

	string nome[N];
	float salario[N], media[N], INSS[N], IR[N], descontoinss[N], descontoir[N], soma=0;//salarioliquido[i],desconto0[i],desconto10[i],desconto20[i],desconto30[i];
	
		for (i=0; i<N; i++)
	{
		cout<<"Nome do funcion�rio: "; 
		cin>>nome[i];	
		cout<<"Sal�rio bruto "; 
		cin>>salario[i];
		cout<<"Qual � o desconto do INSS: "; 
		cin>>INSS[i];
		cout<<"Qual � o desconto do IR: "; 
		cin>>IR[i];
		descontoinss[i]=(salario[i]*INSS[i])/100;		
		descontoir[i]=(salario[i]*IR[i])/100;
		cout<<endl;	
		
	}
	
		for (i=0; i<N; i++) 
	{		
		cout<<"Nome do Funcion�rio: "<<nome[i]<<", seu sal�rio: "<<salario[i]<<", desconto do INSS: "<<INSS[i];
		if (salario[i]<1800)
		{	
		cout<<"% Seu (IR) ser� de: 0% "<<", Sal�rio L�quido: "<<salario[i]-descontoir[i]-descontoinss[i]<<endl;
		cont_zero++;
		}
		else
		if (salario[i]>=1800 and salario[i]<3000)
		{
		cout<<"% Seu (IR) ser� de: 10% "<<", Sal�rio L�quido: "<<salario[i]-descontoir[i]-descontoinss[i]<<endl;
		cont_dez++;
		}		
		else
		if (salario[i]>=3000 and salario[i]<5000)
		{
		cout<<"% Seu (IR) ser� de: 20% "<<", Sal�rio L�quido: "<<salario[i]-descontoir[i]-descontoinss[i]<<endl;
		cont_vinte++;
		}
		else
		if (salario[i]>=5000)
		{
		cout<<"% Seu (IR) ser� de: 30% "<<", Sal�rio L�quido: "<<salario[i]-descontoir[i]-descontoinss[i]<<endl;
		cont_trinta++;
		}
		soma = soma+salario[i]-descontoir[i]-descontoinss[i];
	}	
		cout<<"M�dia de s�lario �: "<<soma/N<<endl;
		cout<<"--------------------------------------------------------------------------------------------------------------------"<<endl;
			
		for (i=0; i<N; i++) 
	{		
		if (salario[i]-descontoir[i]-descontoinss[i]<soma/N)
		{		
		cout<<nome[i]<<" est� a baixo da m�dia sal�rial"<<", seu sal�rio �: "<<salario[i]-descontoir[i]-descontoinss[i]<<endl;
		}		
	}	
	 	cout<<"--------------------------------------------------------------------------------------------------------------------"<<endl;
	 	cout<<"O percentual de funcion�rio isentos de IR � de: "<<cont_zero*100.0/N<<"%"<<nome[i]<<"      "<<endl;
}		




		



































