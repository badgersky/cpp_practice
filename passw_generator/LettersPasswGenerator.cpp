#pragma once
#include "LettersPasswGenerator.h"
#include <cstdlib>

string LettersPasswGenerator::get_passw() {
    if (!passw.empty()) {
        return passw;
    }
}

string LettersPasswGenerator::generate_passw(unsigned int size) {
    string characters = uppercase + lowercase;
    string passw = "";

    int n = characters.size();
    int length = 0;
    int i;

    while (length <= size) {
        i = rand() % n;
        passw += characters[i];
        length++;
    }

    return passw;
}
