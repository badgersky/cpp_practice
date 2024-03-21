#include "Price.h"

class PriceNormal: public Price{
public:
    PriceNormal(const string &product_name, float price): Price(product_name, price) {
    }

    ~PriceNormal() = default;

    void print_price() override;

    float get_price() override;
};

