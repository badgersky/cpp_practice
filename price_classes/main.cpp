#include "PriceNormal.h"
#include "PriceDiscount.h"
#include "main.h"

int main() {
    auto *p = new PriceNormal();
    auto *pd = new PriceDiscount();

    bool active = true;
    return 0;
}

void create_price_normal(PriceNormal *p, const string &product_name, float price) {
    *p = PriceNormal(product_name, price);
}

void create_price_discount(PriceDiscount *p, const string &product_name, float price, float discount) {
    *p = PriceDiscount(product_name, price, discount);
}
