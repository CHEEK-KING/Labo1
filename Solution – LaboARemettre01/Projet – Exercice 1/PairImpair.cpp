#include <iostream>
using namespace std;
void main()
{

	int n1; //n1 pour le nombre que l'utilisateur mettera
	int n2; //n2 pour le resultat de n1 % 2

	cout << "Veuiller entrez votre nombre:  ";
	cin >> n1;

	n2 = n1 % 2; 

	if (n2 == 0)         //si n1 est un nombre pair n2 sera égale à 0
	{

		cout<<"\n\n" << n1 << " est un nombre pair!\n\n";

	}
	else      //si n1 est impair n2 sera toujours 1 mais nous avons pas à le specifier
	{

		cout << "\n\n" << n1 << " est un nombre impair!\n\n";

	}
}

/*
Plan de test:
1:
input: 256
output: 256 est un nombre pair!

2:
input: 44
output: 44 est un nombre pair!

3:
input: 7
output: 7 est un nombre impair!
*/