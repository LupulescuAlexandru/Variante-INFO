/*
Se consideră şirul 1, 2,1, 3,2,1, 4,3,2,1, ...
construit astfel: prima grupă este formată din numărul 1, a doua grupă este formată din
numerele 2 şi 1, iar grupa a k-a, este formată din numerele k, k-1,..., 1.
Se cere să se citescă de la tastatură un număr natural n (n≤1000) şi să se afişeze pe ecran
cel de al n-lea termen al şirului dat.
*/
#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	while (n != 0)
	{
		if (n == 1)
			cout << n;
		else
			cout << n << ",";
		n--;
	}
    return 0;
}

