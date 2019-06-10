/*
Un text are cel mult 100 de caractere, iar cuvintele sale sunt formate doar din litere mici ale alfabetului englez şi sunt separate prin câte un spațiu.  
Scrieţi un program C/C++ care citeşte de la tastatură un text de tipul precizat mai sus şi îl transformă în memorie prin înlocuirea fiecărui cuvânt format din 
număr par de litere cu simbolul #. Programul afişează pe ecran textul obţinut sau mesajul nu exista dacă textul citit nu conține astfel de cuvinte.*/
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	char s[100],*cuv, i=0, temp[100]="/0", checker=0;
	cin.getline(s, 100);
	cuv = strtok(s, " ");

	while (cuv != NULL)
	{
		if (strlen(cuv) % 2 == 0)
		{
			temp[i] = '#';
			i++;
			temp[i] = ' ';
			i++;
			checker=1;
		}
		else
		{
			int j = 0;
			while (j != strlen(cuv))
			{
				temp[i] = cuv[j];
				i++;
				j++;
			}
			temp[i++] = ' ';
		}
		cuv = strtok(NULL, " ");
	}
	
	if (checker == 1)
	{
		strcpy(s, temp);
		cout << s;
	}
	else
		cout << "nu exista";
    return 0;
}

