#include "Price.h"

class PriceNormal: public Price{
public:
    void print_price() override;

    float get_price() override;
};
