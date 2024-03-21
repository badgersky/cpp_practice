#pragma once
#include <iostream>

using namespace std;

class Price {
protected:
    string product_name;
    float price;
public:
    Price();

    Price(const string &product_name, float price): product_name(product_name), price(price) {};

    ~Price() = default;

    virtual float get_price();

    void set_price(float new_price);

    virtual void print_price();
};
