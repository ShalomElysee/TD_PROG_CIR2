#include <iostream>
#include <iomanip>
#include <cmath>    // pour sqrt et pow
#include <cstdlib>  // pour rand()
#include "Point2D.hpp"  // inclusion du fichier d'en-t�te correspondant


using namespace std;

// Constructeurs
Point2D::Point2D() {
    // Remplir x et y avec des valeurs al�atoires (de 0 � 100)
    x = static_cast<float>(rand()) / RAND_MAX * 100;
    y = static_cast<float>(rand()) / RAND_MAX * 100;
}

// Nouveau constructeur pour initialiser un point avec des coordonn�es sp�cifiques
Point2D::Point2D(float newx, float newy) : x(newx), y(newy) {}

// Setters
void Point2D::setXYZ(const float& newx, const float& newy) {
    x = newx;
    y = newy;
}

void Point2D::setX(const float& newx) {
    x = newx;
}

void Point2D::setY(const float& newy) {
    y = newy;
}

// Getters
float Point2D::getX() {
    return x;
}

float Point2D::getY() {
    return y;
}

// M�thode pour afficher les coordonn�es
void Point2D::print() {
    cout << x << ";" << y << endl;
}

// M�thode pour calculer la distance � un autre point
float Point2D::distanceTo(const Point2D& other) {
    return sqrt(pow(x - other.x, 2) + pow(y - other.y, 2));
}


// Fonction principale
int main() {
	// Cr�ation d'un point avec des coordonn�es al�atoires
	Point2D p1;
	p1.print(); // Affiche les coordonn�es de p1

	// Cr�ation d'un point avec des coordonn�es d�finies (1, 1, 1)
	Point2D p2(1.0f, 1.0f);
	p2.print(); // Affiche les coordonn�es de p2

	// Calcul de la distance entre p1 et p2
	cout << "Distance entre p1 et p2: " << p1.distanceTo(p2) << endl;

	return 0;
}
