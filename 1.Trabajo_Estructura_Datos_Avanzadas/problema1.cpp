
//5. Mostrar los múltiplos de 2 y 5 entre 0 y 100

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int i=0, b, m;

	cout << "Digite (2 o 5) para obtener sus multiplos y [3] salir: \n";
	cout << "-> "; cin >> m;
	switch (m)
	{
	case 2:cout << "El multiplo de 2 es:" << endl;
		cout << "==================================="<<endl;
		while (i <= 100)
		{
			i++;
			if (i % 2 == 0)
			{
				cout << i << " ";
			}
		}
		cout << "\n\n\n"; return main(); break;

	case 5:cout << "El multiplo de 5 es:"<< endl;
		cout << "===================================" << endl;
	while (i <= 100)
	{
		i++;
		if (i % 5 == 0)
		{
			cout << i << " ";
		}
	}
		cout << "\n\n\n"; return main(); break;
	case 3:cout << "Seguro que quiere salir....?  SI o NO\n";
		cout << "\n 1 - SI";
		cout << "\n 2 - NO \n\n";
		cout << "-> "; cin >> b;
		if (b==1)
		{
			return 0;
		}
		else
		{
			return main();
		}break;
	default: cout << "No escogiste ninguna de las 2 opciones sugeridas \n\n"; break;

	}
	

	cin.get();
	return 0;
}