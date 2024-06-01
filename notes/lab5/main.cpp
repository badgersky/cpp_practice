#include <iostream>
#include <vector>
#include <functional>
#include "my_exception.h"

using namespace std;

void cin_fail();
void segment();
double funMin(function<double( double )> f, double step, double start, double end);

class my_exception : public exception {
    string information;
public:
    explicit my_exception(string &info) : information(info) {}
    const char * what() {
        return information.c_str();
    }
};

int main() {
    string input;
    cin >> input;
    try {
        cout << converter::hex_to_dec(input) << endl;
    } catch(convert_exception &e) {
        cout << e.what() << endl;
    }

//    cin_fail();
//    segment();
//    cout << "Podaj liczbe" << endl;
//    string input;
//    cin >> input;
//
//    try {
//        throw my_exception("dupa");
//    } catch(my_exception &e) {
//        cout << e.what() << endl;
//    }
//
//    try {
//        int myNumber = stoi(input);
//
//        cout << "Podales " << myNumber << endl;
//    } catch(invalid_argument &e) {
//        cout << "to nie byla liczba" << endl;
//        cout << e.what() << endl;
//    }
//
//    cout << funMin([](double x) { return x*x*x; }, 1, 1, -10) << endl;
//    return 0;
}


void segment() {
    vector<int> v;
    try {
        cout <<"V: " << v.at(100) << endl;
    } catch(exception &e) {
        cout << "Error! " << e.what() << endl;
    }
}


void cin_fail() {
    cout << "Podaj liczbę całkowitą" << endl;
    int a;
    cin >> a;
    if (cin.fail())
        cout << "Nie wiesz co to jest liczba całkowita!?" << endl;
    else
        cout << "Twoja liczba to: " << a << endl;
}


double funMin(function<double( double )> f, double step, double start, double end) {
    double min = f(start);

    for (double i = start + step; i <= end; i += step) {
        if (f(i) < min) {
            min = f(i);
        }
    }

    return min;
}
