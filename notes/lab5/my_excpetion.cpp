#include <string>
#include <iostream>
#include <vector>
#include "my_exception.h"
#include <sstream>

using namespace std;

string converter::hex_to_dec(const string &num_hex) {
    string num_dec;
    string pattern = "0123456789ABCDEF";
    int i, num = 0;
    unsigned pos;
    vector<char> symbols {'A', 'B', 'C', 'D', 'E', 'F'};
    vector<string> numbers {"10", "11", "12", "13", "14", "15"};

    pos = num_hex.size() - 1;
    for (char dig : num_hex) {
        if (pattern.find(dig) == std::string::npos) {
            throw convert_exception(dig, num_hex);
        }

        if (48 <= dig && dig <= 57) {
            num += (dig - '0') * pow(16, pos);
        } else {
            i = get_index(symbols, dig);
            num += stoi(numbers[i]) * pow(16, pos);
        }

        pos -= 1;
    }

    stringstream ss;
    ss << num;
    num_dec = ss.str();
    return num_dec;
};

int converter::pow(int base, unsigned power) {
    int res = 1;
    for (int i = 0; i < power; i++) {
        res = res * base;
    }

    return res;
}

int converter::get_index(vector<char> vec, char symbol) {
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] == symbol) return i;
    }

    return -1;
}

const char *convert_exception::what() {
    return info.c_str();
}
