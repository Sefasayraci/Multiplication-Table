#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;
main(){
	
	setlocale(LC_ALL, "Turkish");
	
	basla:
	int a;	
	cout << "Bir sayý giriniz = " ;
	
	
	cin >> a;
	
	
	switch(a){
	
	
	case 1 ... 10:
	{
		system("CLS");
		for(int i = 1; i <= 5; i++)//k soldaki sayýlar,sabit sayýlar.
		{
     		for(int k = 1; k <= a; k++)
     		{
     			cout<<k<<"x"<<i<<"="<<k*i<<"\t";//kxi þeklinde görüntü oluþturuldu.
			}
	 	cout<<endl;
		}
	cout<<endl;
		for(int i = 6; i <= 10; i++)//k soldaki sayýlar,sabit sayýlar.
		{
     		for(int k = 1; k <= a; k++)
     		{
     	 		cout<<k<<"x"<<i<<"="<<k*i<<"\t";//kxi þeklinde görüntü oluþturuldu.
			}
	 	cout<<endl;
		}
	}
}
	if(a>20){
		cout << "20den kucuk sayýlar giriniz;" << endl;//maks. gireceðimiz deðer 20 olarak atandý.
	}
	cout<<"\n";
	
	cout << "Tekrarlamak icin 'e' veya 'E' tuþuna basýnýz";//Programý devam ettirmek için klavyeden sadece"e" tuþundan veri alýnacak.
 	char b=getch();
	if(b=='e'||'E')// "e" ve "E" tuþu atandý.
	{
		cout<<endl<<endl;
		goto basla;	
	}

	  
}

