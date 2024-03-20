#include <iostream>
using namespace std;

class Price {
protected:
    string product;
    double price;
public:
    Price(double price, const string &name);

    ~Price() = default;

    double get_price() = 0;

    void set_price(double n) = 0;

    string get_name() = 0;

    void set_name(const string &new_name) = 0;

    void print();
};
