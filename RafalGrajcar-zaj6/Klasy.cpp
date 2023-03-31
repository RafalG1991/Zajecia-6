#include "Klasy.h"

KlasaAbstrakcyjna::~KlasaAbstrakcyjna() {
	cout << "Wirtualny Destruktor" << endl;
}
void KlasaAbstrakcyjna::pole() {}

Kolo::Kolo() {}
Kolo::Kolo(double r): r(r) {}
void Kolo::pole() {
	cout << "Pole kola wynosi: " << atan(1) * 4 * r * r<< endl;
}
Kolo::~Kolo() {
	cout << "Destruktor Kolo" << endl;
}

Walec::Walec(double r, double h): r(r), h(h) {}
void Walec::pole() {
	cout << "Pole walca wynosi: " << 2*atan(1) * 4 * r * r + 2* atan(1) * 4*h << endl;
}
Walec::~Walec() {
	cout << "Destruktor Walec" << endl;
}

Kwadrat::Kwadrat() {}
Kwadrat::Kwadrat(double a): a(a) {}
void Kwadrat::pole() {
	cout << "Pole kwadratu wynosi: " << a*a << endl;
}
Kwadrat::~Kwadrat() {
	cout << "Destruktor Kwadrat" << endl;
}
Szescian::Szescian(double a): a(a) {}
void Szescian::pole() {
	cout << "Pole szescianu wynosi: " << a * a * 6 << endl;
}
Szescian::~Szescian() {
	cout << "Destruktor Szescian" << endl;
}

