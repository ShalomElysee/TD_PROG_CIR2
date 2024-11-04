#include<iostream>
#include <iomanip>
#include <cmath>    // pour sqrt et pow
#include <cstdlib>  // pour rand()


using namespace std;

class A{

public:
A() { x = 0; std::cout << "1"; }
A(int px) { x = px; std::cout << "2"; }
A(const A & pa) { x = pa.x; std::cout << "3"; }
protected:
int x;

};

class B{
public:
B(const A & pa = A()) :a(pa) { std::cout << "4"; }
B(const A & pa,int py) { a = pa; y = py; std::cout << "5"; }
protected:
A a;
int y;
};

class C: public B{
public:
C(int pz = 1) { z = pz; std::cout << "6"; }
C(A pa) :B(pa) { z = 0; std::cout << "7"; }
C(const B & pb) :B( pb ),a(1) { z = 0; std::cout << "8"; }
protected:
A a;
int z;
};

int main() {
	std::cout <<  "--A--\n";
	A a0; std::cout << std::endl;      //class A 
	A a1(3); std::cout << std::endl;
	A a2(a1); std::cout << std::endl;
	A a3 = a2; std::cout << std::endl;
	a3 = a1; std::cout << std::endl;
	std::cout << "--B--\n";
	B b0(a0, 3); std::cout << std::endl;
	B b1(a1); std::cout << std::endl;
	B b2; std::cout << std::endl;
	std::cout << "--C--\n";
	C c0; std::cout << std::endl;
	C c1(a1);
	C c2(b2);
}
