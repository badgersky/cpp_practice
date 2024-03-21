#pragma once
#include "PasswGenerator.h"

class NumberLetterPasswGenerator: public PasswGenerator {
public:
public:
    NumberLetterPasswGenerator() = default;

    ~NumberLetterPasswGenerator() = default;

    string get_passw() override;

    void set_passw(const string &new_passw) override;

    unsigned get_size() override;

    string generate_passw(unsigned size) override;
};

