#include <iostream>
#include <iomanip>
#include <cmath>    // pour sqrt et pow
#include <cstdlib>  // pour rand()
#include "Point3D.hpp"  // inclusion du fichier d'en-t�te correspondant

using namespace std;

// Impl�mentation des constructeurs
Point3D::Point3D() {
	// Remplir x, y, z avec des valeurs al�atoires (de 0 � 100)
	x = static_cast<float>(rand()) / RAND_MAX * 100;
	y = static_cast<float>(rand()) / RAND_MAX * 100;
	z = static_cast<float>(rand()) / RAND_MAX * 100;
}

// Initialisation des coordonn�es avec des valeurs sp�cifiques
Point3D::Point3D(const float& newx, const float& newy, const float& newz) {
	x = newx;
	y = newy;
	z = newz;
}

// Setters
void Point3D::setXYZ(const float& newx, const float& newy, const float& newz) {
	x = newx;
	y = newy;
	z = newz;
}

void Point3D::setX(const float& newx) {
	x = newx;
}

void Point3D::setY(const float& newy) {
	y = newy;
}

void Point3D::setZ(const float& newz) {
	z = newz;
}

// Getters
float Point3D::getX() {
	return x;
}

float Point3D::getY() {
	return y;
}

float Point3D::getZ() {
	return z;
}

// M�thode pour afficher les coordonn�es
void Point3D::print() {
	cout << x << ";" << y << ";" << z << endl;
}

// M�thode pour calculer la distance � un autre point
float Point3D::distanceTo(const Point3D& other) {
	return sqrt(pow(x - other.x, 2) + pow(y - other.y, 2) + pow(z - other.z, 2));
}

// Fonction principale
int main() {
	// Cr�ation d'un point avec des coordonn�es al�atoires
	Point3D p1;
	p1.print(); // Affiche les coordonn�es de p1

	// Cr�ation d'un point avec des coordonn�es d�finies (1, 1, 1)
	Point3D p2(1.0f, 1.0f, 1.0f);
	p2.print(); // Affiche les coordonn�es de p2

	// Calcul de la distance entre p1 et p2
	cout << "Distance entre p1 et p2: " << p1.distanceTo(p2) << endl;

	return 0;
}
