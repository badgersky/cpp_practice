//
// Created by badgersky on 01.06.24.
//

#include <string>

#ifndef LAB5_MY_EXCEPTION_H
#define LAB5_MY_EXCEPTION_H

#endif //LAB5_MY_EXCEPTION_H

namespace converter {
    std::string hex_to_dec(const std::string &hex_num);

    int get_index(std::vector<char> vec, char symbol);

    int pow(int base, unsigned power);
}

class convert_exception : public std::exception{
    char invalid_char;
    std::string invalid_str;
    std::string info;
public:
    convert_exception(char ch, const std::string &str) : invalid_char(ch), invalid_str(str) {
        info = "Unrecognized char '";
        info += invalid_char;
        info += "' in passed hex number: ";
        info += invalid_str;
    }
    const char* what();
};