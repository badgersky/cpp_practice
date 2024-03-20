#include <iostream>
#include <vector>
#include <map>
#include "Rydwan.h"

using namespace std;

int main() {
    // WEKTORY
    vector<int> tab; // tworzenie vectora
    cout << tab.size() << endl;

    // push back dodaje element na koniec tablicy
    tab.push_back(5);
    tab.push_back(10);
    tab.push_back(20);
    tab.push_back(2);
    tab.push_back(69);
    tab.push_back(420);

    // .begin() zwraca wskaznik na poczatek tablicy
    tab.insert(tab.begin() + 2, 150); // dodanie elementu na 2 indeksie
    cout << tab.size() << endl;

    for (auto row: tab) {
        cout << row << endl;
    }

    // MAPY
    map<string, int> my_map;
    my_map["test"] = 150;

    // KOPIOWANIE OBIEKTOW
//    Vehicle v1 = Vehicle("v90", "volvo", 5);
//    Vehicle v2 = v1;
//    Vehicle v3(v1);

    cout << "===============================================" << endl;

    // DZIEDZICZENIE
//    Rydwan r1;
//    v3.print();
//    r1.set_number_of_horses(50);
//    r1.print();

    // POLIMORFIZM
//    Vehicle *vp1 = &r1;
    Vehicle *vp2 = new Rydwan("lol", "esa", 2, 10);

//    vp1->print();
    vp2->print();

    cout << "===============================================" << endl;
    delete vp2;
}
