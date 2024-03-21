#include "Price.h"

class PriceDiscount:public Price {
protected:
    float discount;
public:
    PriceDiscount(const string &product_name, float price, float discount) : Price(product_name, price),
                                                                            discount(discount) {
    }

    ~PriceDiscount() = default;

    void print_price() override;

    void set_discount(float new_discount);

    float get_discount();

    float get_price() override;
};
