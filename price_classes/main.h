#pragma once
#include <iostream>
#include "PriceNormal.h"

void create_price_normal(PriceNormal *p, const string &product_name, float price);

void create_price_discount(PriceDiscount *p, const string &product_name, float price, float discount);

char print_instructions();

void get_input(string &name, float &price);

void get_discount(float &discount);

void print_products(const vector<Price>& products, int n);