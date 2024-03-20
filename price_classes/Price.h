#include <iostream>

using namespace std;

class Price {
protected:
    string product_name;
    float price;
public:
    Price(const string &product_name, float price): product_name(product_name), price(price) {};

    ~Price() = default;

    virtual void print_price();
};
