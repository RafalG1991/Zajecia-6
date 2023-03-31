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
}