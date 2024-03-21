#pragma once
#include <iostream>
#include "LettersPasswGenerator.h"
#include "NumberPasswGenerator.h"
#include "NumberLetterPasswGenerator.h"
#include "main.h"

int main() {
    srand(time(0));

    unsigned option, size;
    string passwd;
    auto *gen = new PasswGenerator();

    print_options();
    option = get_option();
    size = gen->get_size();

    if (option == 1) {
        gen = new NumberPasswGenerator();
    } else if (option == 2) {
        gen = new LettersPasswGenerator();
    } else if (option == 3) {
        gen = new NumberLetterPasswGenerator();
    } else {
        print_error();
        return 1;
    }

    passwd = gen->generate_passw(size);
    gen->set_passw(passwd);
    cout << "\nYour password:" << endl;
    cout << gen->get_passw() << endl;
}

void print_error() {
    cout << "wrong option" << endl;
}

void print_options() {
    cout << "1 - number password" << endl;
    cout << "2 - letter password" << endl;
    cout << "3 - number-letter password" << endl;
    cout << "\nYour choice:" << endl;
}

unsigned get_option() {
    unsigned option;

    cin >> option;
    cin.ignore();

    if (option < 1 || option > 3) {
        return 4;
    }

    return option;
}