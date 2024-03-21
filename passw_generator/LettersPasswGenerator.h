#pragma once
#include "PasswGenerator.h"

class LettersPasswGenerator: public PasswGenerator {
public:
    LettersPasswGenerator() = default;

    ~LettersPasswGenerator() = default;

    string get_passw() override;

    string generate_passw(unsigned size) override;
};

