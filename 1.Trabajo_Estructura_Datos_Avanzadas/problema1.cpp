
//5. Mostrar los múltiplos de 2 y 5 entre 0 y 100

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{

	int i=0, j, result;
	cout << "Los multiples de 2 son: " << endl;
	while (i <= 100)
	{
		i++;
		if(i%2==0)
		{
			cout << i << " ";
		}
		
	}


	cin.get();
	return 0;
}