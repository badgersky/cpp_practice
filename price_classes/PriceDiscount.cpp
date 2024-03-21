#include "PriceDiscount.h"

void PriceDiscount::print_price() {
    cout << product_name << " - " << (price - price * discount) << " zl" << endl;
}

float PriceDiscount::get_price() {
    return price - discount * price;
}

void PriceDiscount::set_discount(float new_discount) {
    if (new_discount > 0) {
        discount = new_discount;
    }
}

float PriceDiscount::get_discount() {
    return discount;
}

PriceDiscount::PriceDiscount() {

}
