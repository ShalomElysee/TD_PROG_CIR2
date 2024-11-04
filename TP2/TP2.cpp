#include <iostream>
#include <iomanip>
#include <fstream>  // Pour ifstream
#include <string>
#include <sstream>     // Pour std::stringstream
#define multiplier(x,y) ((x) * (y))
int main(void)
{
	//Exercice 1
	/*
	int a;
	int b;

	std::cout << "Entrez une valeur :" << std::endl;
	std::cin >> a;
	std::cout << "Entrez une autre valeur :" << std::endl;
	std:: cin >> b;
	std::cout << multiplier(a + 1, b + 1) << std::endl;

	//Exercice 2
	int a;
	int b;
	std::cout << "Entrez une valeur entre 0 et 9" << std::endl;
	std::cin >> a;
	if (a > 0 && a < 9) {
		for (int i = 0; i < 101; i++) {  // Initialize i to 0
			b = a * i;
			std::cout << std::setw(10) << a << "*" << i << " = " << b << std::endl;
		}
	}
	
	//Exercice 3

	//étape 1: Ouvrir un fichier
     
    std::ifstream inputFile("../../../../Annexes Prog/textealire.txt");

    // Étape 2 : Si le fichier ne s'ouvre pas, afficher une erreur
    if (!inputFile.is_open()) {
        std::cout << "Erreur d'ouverture" << std::endl;
        return 1;
    }

    // Étape 3 : Parcourir le fichier
    std::string line;
    int NombreDeLigne = 0;
    int NombreDeMot = 0;
    int NombreDeLettre = 0;

    while (std::getline(inputFile, line)) {
        // Afficher chaque ligne lue
        std::cout << line << std::endl;

        // Incrémenter le compteur de lignes
        NombreDeLigne++;

        // Utiliser stringstream pour lire les mots dans la ligne
        std::stringstream ss(line);
        std::string word;

        // Compter les mots dans la ligne
        while (ss>>word) {
            NombreDeMot++;
            NombreDeLettre += word.length();

        }
    }

    // Afficher le nombre de lignes et de mots
    std::cout << "Le nombre de lignes est : " << NombreDeLigne << std::endl;
    std::cout << "Le nombre de mots est : " << NombreDeMot << std::endl;
    std::cout << "Le nombre de lettres est : " << NombreDeLettre << std::endl;

    // Étape 4 : Fermer le fichier
    inputFile.close();

    return 0;
    */


}