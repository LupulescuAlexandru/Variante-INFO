#include <iostream>

using namespace std;

int F(int n, int a[])
{
	int s = 0;
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
			if (a[i] % 2 == 1)
				s += a[i];
	}
	return s;
}

int main()
{
	int v[100], n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> v[i];
	cout << F(n, v);
    return 0;
}

