#include "PriceNormal.h"
#include "PriceDiscount.h"

int main() {
    PriceDiscount pd1 = PriceDiscount("sweter", 100, 0.25);
    PriceNormal p1 = PriceNormal("sweter", 100);
    return 0;
}
