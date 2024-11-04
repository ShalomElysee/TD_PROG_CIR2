/* Premier programme en C 
#include<stdlib.h>
#include<stdio.h>
#include<string.h>// pour utiliser strcmp
#include <math.h>   // Pour utiliser la racine carrée
#include <ctype.h>  // Pour utiliser la fonction tolower()
int main()
{
	printf("Hello World\n");
	

/*Exercice 2 :
 Ecrire le programme en C permettant le calcul des racines d'une équation du second degré
 (ax2+bx+c=0).
	int a;
	int b;
	int c;
	float x;
	float x1;
	float x2;
	float x1c;
	float x2c;
	printf("entrez une valeur de A : ");
	scanf_s("%d", &a);
	printf("entrez une valeur de B : ");
	scanf_s("%d", &b);
	printf("entrez une valeur de C : ");
	scanf_s("%d", &c);
	int delta = b^2 - (4 * a*c);

	if (delta < 0) {
		x1 = (-b / 2 * a);
		x1c = sqrt(delta);
		x2 = (-b / 2 * a);
		x2c = sqrt(delta);
		printf(" Votre expression (%d)X^2 + (%d)X  + (%d) a donne 2 racines complexes:\n Delta= %d \n X1= %d + (%fi), X2= %d + (%fi) ", a, b, c, delta, x1, x1c, x2,x2c);

	};
	if (delta > 0) {
		x1 = (-b - sqrt(delta))/2*a;
		x2 = (-b + sqrt(delta)) / 2 * a;
		printf(" Votre expression (%d)X^2 + (%d)X  + (%d) a donne 2 racines distinctes:\n Delta= %d \n X1= %f, X2= %f ", a,b,c, delta, x1, x2);


	};
	if (delta==0) {
		x = -b/ 2 * a;

		printf(" Votre expression (%d)X^2 + (%d)X  + (%d) a donne 1 racine double:\n Delta= %d \n X1= %f ", a, b, c, delta, x);

	}

	 Exercice 3 :
 Ecrire une fonction « minuscule » qui retourne le caractère en minuscule d’un caractère donné en
 paramètre.

	char tab[] = {"SHALOM"};

	for (int i = 0; i < sizeof tab; i++) {
		printf(" %c", tolower(tab[i]));
	}

	 Exercice 4 :
 Ecrire un programme permettant, via trois fonctions différentes, le calcul de « n! »
 1)
	int n;
	int factorielle=1;
	printf("Entrez une valeur de n:");
	scanf_s("%d", &n);
	for (int i=1; i<= n; i++) {
		factorielle *= i;

	}
	printf("La factorielle de %d est %d",n, factorielle);
2)


	int n2;
	int i2=1;
	int factorielle2 = 1;
	printf("Entrez une valeur de n:");
	scanf_s("%d", &n2);
	while (i2 <= n2) {
		factorielle2 *= i2;
		i2++;

	}
	printf("La factorielle de %d est %d", n2, factorielle2);
	3)

	int n3;
	int i3 = 1;
	int factorielle3 = 1;
	printf("Entrez une valeur de n:");
	scanf_s("%d", &n3);
	int fonction_factorielle(n3; i3; factorielle3) {
		while (i3 <= n3) {
			factorielle3 *= i3;

			int fonction_factorielle();

		}

	}
	
	char chainentree[] = { "Bonjour" };
	char lettrentree;
	int b = 0;
	int length = sizeof(chainentree) - 1; // Longueur du mot sans le caractère nul '\0'
	char lettresTrouvees[length]; // Tableau pour les lettres trouvées

	// Initialisation du tableau avec des '_'
	for (int i = 0; i < length; i++) {
		lettresTrouvees[i] = '_';
	}

	do {
		printf("Joueur 1, entrez une lettre : ");
		scanf(" %c", &lettrentree); // Espace avant %c pour ignorer les retours à la ligne
		b = b + 1; // Incrémentation correcte

		// Vérification si la lettre entrée est dans le mot
		for (int i = 0; i < length; i++) {
			if (chainentree[i] == lettrentree) {
				lettresTrouvees[i] = lettrentree; // Remplacement du '_' par la lettre correcte
			}
		}

		// Affichage du mot avec les lettres trouvées ou des '_'
		for (int i = 0; i < length; i++) {
			printf("%c", lettresTrouvees[i]);
		}
		printf("\n"); // Saut de ligne pour meilleure lisibilité

	} while (b < 10); // Arrêt après 10 essais

	return 0;


}
*/


