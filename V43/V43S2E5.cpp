#include <iostream>

using namespace std;

int main()
{
	int n, m[23][23];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j) //diagonala principala
				m[i][j] = 2;
			if (i < j) //deasupra diagonalei principale
				m[i][j] = 1;
			if (i > j) //sub diagonala principala
				m[i][j] = 3;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << m[i][j] << " ";
		}
		cout << endl;
	}
    return 0;
}

