#include "Rydwan.h"

Rydwan::Rydwan(): Vehicle("Kun", "Fast", 1) {
    cout << "Rydwan constructor" << endl;
}

unsigned Rydwan::get_number_of_horses() {
    return number_of_horses;
}

void Rydwan::set_number_of_horses(unsigned int n) {
    number_of_horses = n;
}

void Rydwan::print() {
    cout << name << " " << brand << " kunie: " << number_of_horses << endl;
}

Rydwan::Rydwan(const string &name, const string &model, unsigned int n, unsigned int horses):
    Vehicle(name, model, n), number_of_horses(horses) {
    cout << "Rydwan constructor" << endl;
}

Rydwan::~Rydwan() {
    cout << "Rydwan destruktor" << endl;
}

void Rydwan::turn_right() {
    cout << "turning right" << endl;
}
