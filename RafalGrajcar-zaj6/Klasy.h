#pragma once
#include <iostream>

using namespace std;

class KlasaAbstrakcyjna {
public:
	virtual void pole()=0;
	virtual ~KlasaAbstrakcyjna();
};

class Kolo : public KlasaAbstrakcyjna {
	double r;
public:
	Kolo();
	Kolo(double r);
	void pole();
	~Kolo();
};

class Walec : public Kolo {
	double r;
	double h;
public:
	Walec(double r, double h);
	void pole();
	~Walec();
};

class Kwadrat : public KlasaAbstrakcyjna {
	double a;
public:
	Kwadrat();
	Kwadrat(double a);
	void pole();
	~Kwadrat();
};

class Szescian : public Kwadrat {
	double a;
public:
	Szescian(double a);
	void pole();
	~Szescian();
};

void oblicz(KlasaAbstrakcyjna* wsk);