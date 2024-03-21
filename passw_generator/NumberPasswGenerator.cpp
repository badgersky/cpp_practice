#pragma once
#include "NumberPasswGenerator.h"


string NumberPasswGenerator::get_passw() {
    return PasswGenerator::get_passw();
}

void NumberPasswGenerator::set_passw(const string &new_passw) {
    PasswGenerator::set_passw(new_passw);
}

unsigned NumberPasswGenerator::get_size() {
    return PasswGenerator::get_size();
}

string NumberPasswGenerator::generate_passw(unsigned int size) {
    string passw;

    int n = numbers.size();
    int length = 0;
    int i;

    while (length <= size) {
        i = rand() % n;
        passw += numbers[i];
        length++;
    }

    return passw;
}
