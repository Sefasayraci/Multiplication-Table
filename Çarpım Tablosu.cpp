#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;
main(){
	
	setlocale(LC_ALL, "Turkish");
	
	basla:
	int a;	
	cout << "Bir say� giriniz = " ;
	
	
	cin >> a;
	
	
	switch(a){
	
	
	case 1 ... 10:
	{
		system("CLS");
		for(int i = 1; i <= 5; i++)//k soldaki say�lar,sabit say�lar.
		{
     		for(int k = 1; k <= a; k++)
     		{
     			cout<<k<<"x"<<i<<"="<<k*i<<"\t";//kxi �eklinde g�r�nt� olu�turuldu.
			}
	 	cout<<endl;
		}
	cout<<endl;
		for(int i = 6; i <= 10; i++)//k soldaki say�lar,sabit say�lar.
		{
     		for(int k = 1; k <= a; k++)
     		{
     	 		cout<<k<<"x"<<i<<"="<<k*i<<"\t";//kxi �eklinde g�r�nt� olu�turuldu.
			}
	 	cout<<endl;
		}
	}
}
	if(a>20){
		cout << "20den kucuk say�lar giriniz;" << endl;//maks. girece�imiz de�er 20 olarak atand�.
	}
	cout<<"\n";
	
	cout << "Tekrarlamak icin 'e' veya 'E' tu�una bas�n�z";//Program� devam ettirmek i�in klavyeden sadece"e" tu�undan veri al�nacak.
 	char b=getch();
	if(b=='e'||'E')// "e" ve "E" tu�u atand�.
	{
		cout<<endl<<endl;
		goto basla;	
	}

	  
}

