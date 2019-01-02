#include <iostream>
using namespace std ;

int main ()
	{
		int x,y;
		cout <<"---Perogram menentukan kuadran lingkarana---"<<endl;
		
		cout <<"\nMasukan Koordinat x = ";
		cin >>x;
		
		cout <<"\nMasukan Koordinat y = ";
		cin >>y;
		
		// program unutk menentukan kuadran by zulfikar
		
		if (y >= 0 && x >=0)
			cout <<"\n Bilangan tersebut berada di kuadran 1 "<<endl;
			
		else if (y >= 0 && x <=0)
			cout <<"\n Bilangan tersebut berada di kuadran 2 "<<endl;
		
		else if (y <= 0 && x <=0)
			cout <<"\n Bilangan tersebut berada di kuadran 3 "<<endl;
		
		else if (y <= 0 && x >=0)
			cout <<"\n Bilangan tersebut berada di kuadran 4 "<<endl;
		
	}
