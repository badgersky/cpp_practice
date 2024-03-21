//
// Created by badgersky on 21.03.24.
//

#include "NumberLetterPasswGenerator.h"

string NumberLetterPasswGenerator::get_passw() {
    return PasswGenerator::get_passw();
}

void NumberLetterPasswGenerator::set_passw(const string &new_passw) {
    PasswGenerator::set_passw(new_passw);
}

unsigned NumberLetterPasswGenerator::get_size() {
    return PasswGenerator::get_size();
}

string NumberLetterPasswGenerator::generate_passw(unsigned int size) {
    string characters = uppercase + lowercase + numbers;
    string passw;

    int n = characters.size();
    int length = 0;
    int i;

    while (length <= size) {
        i = rand() % n;
        passw += characters[i];
        length++;
    }

    passw[0] = uppercase[rand() % (uppercase.size())];
    passw[size] = lowercase[rand() % (uppercase.size())];
    passw[1 + rand() % (size - 1)] = numbers[rand() % numbers.size()];

    return passw;
}
