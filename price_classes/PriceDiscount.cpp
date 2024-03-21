#include "PriceDiscount.h"

void PriceDiscount::print_price() {
    cout << product_name << " - " << (price * discount) << " zl" << endl;
}

float PriceDiscount::get_price() {
    return discount * price;
}

void PriceDiscount::set_discount(float new_discount) {
    if (new_discount > 0) {
        discount = new_discount;
    }
}

float PriceDiscount::get_discount() {
    return discount;
}
