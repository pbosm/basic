#include<iostream>
using namespace std;

main()
{
	setlocale(LC_ALL,"portuguese");
	
	string nome;
	float fblue, fred, blueside, redside, nx;
	
	cout<<"Qual � o nome do time? ";
	cin>>nome;
	cout<<"Quantos jogos o time tem no total? ";
	cin>>nx;
	cout<<"-------------------------------------";
	cout<<endl<<"Quantos jogos o time tem na blue side? ";
	cin>>fblue;
	cout<<"Pegou quantos 1� Drag�o blue side? ";
	cin>>blueside;
	cout<<endl<<"o "<<nome<<" tem um total de "<<blueside*100.0/fblue<<"%"<<" na blue side de  1� drag�o"<<"\n";
	cout<<"destes "<<fblue<<" jogos na blue side pegou  1� drag�o "<<blueside<<" vezes"<<" - "<<blueside*100.0/fblue<<" %"<<"\n";
	cout<<"                                                                                        "<<"\n";
	cout<<"Quantos jogos o time tem na red side? ";
	cin>>fred;
	cout<<"Pegou quantos 1� drag�o red side? ";
	cin>>redside;
	cout<<endl<<"o "<<nome<<" tem um total de "<<redside*100.0/fred<<"%"<<" na redside de  1� drag�o"<<"\n";
	cout<<"destes "<<fred<<" jogos na red side pegou  1� drag�o "<<redside<<" vezes"<<" - "<<redside*100.0/fred<<" %"<<"\n";
	cout<<"                                                                                        "<<"\n";
	cout<<"destes "<<fblue+fred<<" jogos o time da "<<nome<<" pegou 1� drag�o "<<blueside+redside<<" vezes"<<" - "<<(blueside+redside)*100.0/nx<<" %"<<endl<<endl;
	
			cout<<"-----------------------------------------------------------"<<endl;
			cout<<"-----------------------------------------------------------"<<endl;
			cout<<"-----------------------------------------------------------"<<endl;
			cout<<"-----------------------------------------------------------"<<endl;
	
			cout<<endl<<"Porcentagem de 1� drag�o Blue side"<<endl;
			cout<<"Time\tGames\tBlue\tPegou.Quantas\tPorcentagem"<<endl;
			cout<<"---------------------------------------------------"<<endl;
			cout<<nome<<"\t"<<nx<<"\t"<<fblue<<"\t"<<blueside<<"\t\t"<<blueside*100.0/fblue<<"%"<<endl<<endl;
			
			cout<<endl<<"Porcentagem de 1� drag�o Red side"<<endl;
			cout<<"Time\tGames\tRed\tPegou.Quantas\tPorcentagem"<<endl;
			cout<<"---------------------------------------------------"<<endl;
			cout<<nome<<"\t"<<nx<<"\t"<<fred<<"\t"<<redside<<"\t\t"<<redside*100.0/fred<<"%"<<endl<<endl;
			
			cout<<endl<<"Porcentagem de 1� drag�o todos games"<<endl;
			cout<<"Time\tGames\tPorcentagem"<<endl;
			cout<<"----------------------------"<<endl;
			cout<<nome<<"\t"<<nx<<"\t"<<(blueside+redside)*100.0/nx<<"%"<<endl;
}
