#include <iostream>

using namespace std;

class Vehicle {
protected:
    string name;
    string brand;
    double *tab;
    unsigned size;
public:
    Vehicle(const string &name, const string &brand, unsigned n): name(name), brand(brand),
    // & do przekazywania zmiennych zlozonych, poprawia to optymalnosc, nalezy dodac const zeby uniknac modyfikacji zmiennej
        tab(new double[n]), size(n) {
        cout << "Vehicle constructor" << endl;
    }

    // konstruktor kopiujacy jesli mamy alokacje pamieci
    Vehicle(const Vehicle& vehicle) {
        size = vehicle.size;
        tab = new double[vehicle.size];
        for (int i = 0; i < size; i++) {
            tab[i] = vehicle.tab[i];
        }
        name = vehicle.name;
        brand = vehicle.brand;
    }

    // uzywa domyslnej definicji deklaracji konstruktora kopiujacego
    // Vehicle(Vehicle& vehicle) = default;

    // uzywa domyslnej implementacji deklaracji konstruktora przenoszacego
    Vehicle(Vehicle&& vehicle) = default;

    virtual ~Vehicle() {
        delete[] tab;
        cout << "Vehicle destructor" << endl;
    }

    virtual void print(); // virtual sprawia ze uzyta bedzie funkcja z klasy dziecka

    virtual void turn_right() = 0; // jest to metoda abstrakcyjna, musi byzaimplementowana w klasie pochodnej
};


