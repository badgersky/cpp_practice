#include "Price.h"

void Price::print_price() {

}

void Price::set_price(float new_price) {
    if (new_price > 0) {
        price = new_price;
    }
}

float Price::get_price() {
    return 0.;
}

Price::Price() {

}
