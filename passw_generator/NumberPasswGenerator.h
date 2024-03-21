#pragma once
#include "PasswGenerator.h"

class NumberPasswGenerator: public PasswGenerator {
public:
    NumberPasswGenerator() = default;

    ~NumberPasswGenerator() = default;

    string get_passw() override;

    void set_passw(string const &new_passw) override;

    unsigned get_size() override;

    string generate_passw(unsigned size) override;
};

