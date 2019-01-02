#include <iostream>

using namespace std;

int main ()
	{
		int x,y;
		
		cout <<"-----Program Menentukan Sebuah kuadran dalam koordinat x dan y-----"<<endl;
		
		cout <<"\nmasukan koordinat x = ";
		cin >> x;
		
		cout <<"\nmasukan koordinat y = ";
		cin >> y;
		
		// cara menentukan kuadran lingkaran
		
		if (y >= 0 && x >=0) 
		cout <<"\n	Bilangan tersebut berada di kuadran 1 ";
		
		else if (y >= 0 && x <=0)
		cout <<"\n	Bilangan tersebut berada di kuadran 2 ";
		
		else if (y <= 0 && x <=0)
		cout <<"\n	Bilangan tersebut berada di kuadran 3 ";
		
		else if (y <= 0 && x >=0)
		cout <<"\n	Bilangan tersebut berada di kuadran 4 ";
	}
