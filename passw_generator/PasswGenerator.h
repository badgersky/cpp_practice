#pragma once
#include <iostream>

using namespace std;

class PasswGenerator {
protected:
    string lowercase = "qwertyuiopasdfghjklzxcvbnm";
    string uppercase = "QWERTYUIOPASDFGHJKLZXCVBNM";
    string numbers = "1234567890";
    string passw;
public:
    PasswGenerator() = default;

    ~PasswGenerator() = default;

    virtual string get_passw();

    virtual void set_passw(string const &new_passw);

    virtual string generate_passw(unsigned size);
};
