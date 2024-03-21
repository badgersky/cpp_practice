#include "PriceNormal.h"

void PriceNormal::print_price() {
    cout << product_name << " - " << price << " zl" << endl;
}

float PriceNormal::get_price() {
    return price;
}

PriceNormal::PriceNormal() {

}
