#pragma once
#include "PasswGenerator.h"

string PasswGenerator::get_passw() {
    return passw;
}

string PasswGenerator::generate_passw(unsigned size) {
    return passw;
}

void PasswGenerator::set_passw(const string &new_passw) {
    passw = new_passw;
}
