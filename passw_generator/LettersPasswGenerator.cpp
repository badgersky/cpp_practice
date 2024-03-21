#pragma once
#include "LettersPasswGenerator.h"
#include <cstdlib>

string LettersPasswGenerator::get_passw() {
    return PasswGenerator::get_passw();
}

string LettersPasswGenerator::generate_passw(unsigned int size) {
    string characters = uppercase + lowercase;
    string passw;

    int n = characters.size();
    int length = 0;
    int i;

    while (length <= size) {
        i = rand() % n;
        passw += characters[i];
        length++;
    }

    passw[0] = uppercase[rand() % (n / 2)];
    passw[size] = lowercase[rand() % (n / 2)];

    return passw;
}

void LettersPasswGenerator::set_passw(const string &new_passw) {
    PasswGenerator::set_passw(new_passw);
}

unsigned LettersPasswGenerator::get_size() {
    return PasswGenerator::get_size();
}
