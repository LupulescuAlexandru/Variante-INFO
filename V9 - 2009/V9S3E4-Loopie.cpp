#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int v[900], x, max=0, n=0, scad=1, k=0, contor=0;
	ifstream f("bac.txt");
	//citirea, filtrarea si aflarea maximului dintre numerele de trei cifre
	while (f >> x)
	{
		if (x / 100 != 0 && x / 1000 == 0)
		{
			if (max < x)
				max = x;
			else
			{
				v[n] = x;
				n++;
			}
		}		
	}
	while (contor != 2)
	{
		k = 0;
		for (int i = 0; i < n; i++)
			if ((max - scad) == v[i])
				k++;
		if (k == 0)
		{
			cout << max - scad;
			contor++;
			scad++;
		}
	}
    return 0;
}

