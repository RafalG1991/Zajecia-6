#include <iostream>
#include "Klasy.h";

int main() {
    Kolo kolo(3);
    Kwadrat kwa(5);
    Walec wal(11, 10);
    Szescian szes(10);
    KlasaAbstrakcyjna* wsk;
    wsk = &kolo;
    wsk->pole();
    oblicz(wsk);
    wsk = &kwa;
    wsk->pole();
    oblicz(wsk);
    wsk = &wal;
    wsk->pole();
    oblicz(wsk);
    wsk = &szes;
    wsk->pole();
    oblicz(wsk);
    cout << "................................" << endl;
}