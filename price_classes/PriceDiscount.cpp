#include "PriceDiscount.h"

void PriceDiscount::print_price() {
    cout << product_name << " - " << (price * discount) << " zl" << endl;
}
