#pragma once
#include "Price.h"

class PriceNormal: public Price {
public:
    PriceNormal();

    PriceNormal(const string &product_name, float price): Price(product_name, price) {
    }

    ~PriceNormal() = default;

    void print_price() override;

    float get_price() override;
};

