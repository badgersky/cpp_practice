#include "Price.h"

Price::Price(double n, const string &name) {
    price=n;
    product = name;
}

double Price::get_price() {
    return price;
}

void Price::set_price(double n) {
    price = n;
}

void Price::print() {
    cout << product << ": " << price << endl;
}

string Price::get_name() {
    return product;
}

void Price::set_name(const string &new_name) {
    product = new_name;
}
