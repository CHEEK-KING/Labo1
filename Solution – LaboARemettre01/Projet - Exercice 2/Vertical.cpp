#include <iostream>
using namespace std;
void main() {

	int n1=0;
	int s1 = 0;
	int s2 = 0;  //n1 = le nombre que l'utilisateur donnera
	int s3 = 0;  //s1 à s5 sont les 5 chiffres qui seront output verticallement
	int s4 = 0;
	int s5 = 0;

	while (n1 > 99999 || n1 < 10000)//loop et condition pour re-demander d'entrer le nombre s'il ne contient pas 5 chiffres
	{

		cout << "\nVeuillez entrer un nombre contenant cinq chiffres: ";
		cin >> n1;

		if (n1 > 99999 || n1 < 10000)
		{

			cout << "\n\nCe nombre ne contient pas cinq chiffres! \n\n";

		}

	}

	s1 =  n1 / 10000;   //processus d'isolation de chaque chiffre pour être capable de output chacun individuellement
	s2 = (n1 / 1000) - (s1 * 10);  
	s3 = (n1 / 100) - ((s1*100) + (s2*10));
	s4 = (n1 / 10) - ((s1 * 1000) + (s2 * 100) + (s3 * 10));
	s5 = (n1)-((s1 * 10000) + (s2 * 1000) + (s3 * 100) + (s4 * 10));

	cout << "\n\n" << s1 << endl << s2 << endl << s3 << endl << s4 << endl << s5 << "\n\n";

}