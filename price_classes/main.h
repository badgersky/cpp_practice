#pragma once
#include <iostream>
#include "PriceNormal.h"

void create_price_normal(PriceNormal *p, const string &product_name, float price);

void create_price_discount(PriceDiscount *p, const string &product_name, float price, float discount);