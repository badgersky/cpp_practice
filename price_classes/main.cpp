#include <vector>
#include <limits>
#include "PriceNormal.h"
#include "PriceDiscount.h"
#include "main.h"

int main() {
    int n;
    cout << "Enter number of products" << endl;
    cin >> n;

    vector<Price> products(n);
    auto *p = new PriceNormal();
    auto *pd = new PriceDiscount();
    bool active = true;
    char choice;
    string *name = nullptr;
    float price = 0, discount = 0;

    while (active) {
        choice = print_instructions();
        if (choice == 's') {
            active = false;
        }
        if (choice == '1') {
            get_input(*name, price);
            create_price_normal(p, *name, price);
            products.push_back(*p);
        }
        if (choice == '2') {
            get_input(*name, price);
            get_discount(discount);
            create_price_discount(pd, *name, price, discount);
            products.push_back(*pd);
        }
    }

    print_products(products, n);

    delete p;
    delete pd;
    return 0;
}

void print_products(const vector<Price>& products, int n) {
    for (Price p: products) {
        p.print_price();
    }
}

char print_instructions() {
    char choice;

    cout << "You have available options: " << endl;
    cout << "1. add normal price product" << endl;
    cout << "2. add discount price product" << endl;
    cout << "s stop and print products" << endl;
    cout << "\nEnter your choice:" << endl;

    cin >> choice;
    return choice;
}

void get_input(string &name, float &price) {
    cout << "Enter product name: ";
    cin.ignore();
    cin >> name;
    cout << "Enter product price: ";
    cin.ignore();
    cin >> price;
}

void get_discount(float &discount) {
    cout << "Enter discount: ";
    cin.ignore();
    cin >> discount;
}

void create_price_normal(PriceNormal *p, const string &product_name, float price) {
    *p = PriceNormal(product_name, price);
}

void create_price_discount(PriceDiscount *p, const string &product_name, float price, float discount) {
    *p = PriceDiscount(product_name, price, discount);
}
