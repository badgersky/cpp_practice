#include <iostream>
#include <array>
#include <fstream>

#include "Triple.h"

using namespace std;

array<double, 3> text_to_double(string text) {
    if (text.length() > 24) {
        cerr << "text to long" << endl;
        exit(1);
    }

    while (text.length() < 24) {
        text += " ";
    }

    const char* char_txt = {text.data()};
    const auto* t_d = reinterpret_cast<const double*>(char_txt);
    array<double, 3> res_arr{t_d[0], t_d[1], t_d[2]};

    return res_arr;
}

string double_to_text(array<double, 3> arr) {
    char * char_txt = reinterpret_cast<char *>(&arr.front());
    return string(char_txt, 3 * sizeof(double));
}

template<typename T>
T add(T a, T b) {
    return a + b;
}

template<typename T>
char convert_save(T param) {
    return *reinterpret_cast<char*>(&param);
}

template<typename T>
T convert_load(const char* param) {
    return *reinterpret_cast<const T*>(param);
}

int main() {
//    data types conversion
//    static cast - simple types
//    float f1 = 6.7;
//    int x = static_cast<int>(f1);
//    cout << x << endl;

//    task 1
    string txt = "wtf is going on";

    auto coded = text_to_double(txt);
    cout << coded[0] << " - " << coded[1] << " - " << coded[2] << endl;

    cout << double_to_text(coded) << endl;

    cout << add(2, 4) << endl;
    cout << add(2.5, 3.5) << endl;
    cout << add((double)2, 2.5) << endl;

    {
        ofstream file("file.bin", ios::binary | ios::out);
        string text = "Hello world!";
        double pi = 3.14;

        if (file.is_open()) {
            char *tmp = reinterpret_cast<char *>(&pi);
            file.write(tmp, sizeof(pi));

            int size = text.size();
            tmp = reinterpret_cast<char *>(&size);
            file.write(tmp, sizeof(size));

            file.write(text.data(), size);
        }
    }

    {
        ifstream file("file.bin", ios::binary | ios::in);
        string text;
        double pi;

        if (file.is_open()) {
            char buffer[512];

            file.read(buffer, sizeof(double));
            pi = *reinterpret_cast<double*>(buffer);
            file.read(buffer, sizeof(int));
            int size = *reinterpret_cast<int*>(buffer);
            file.read(buffer, size);
            text = string(buffer, size);

            cout << text << endl;
            cout << pi << endl;
        }
    }

    Triple t = Triple(1, "esa", 69.420);
    cout << t.first() << endl;
    cout << t.second() << endl;
    cout << t.third() << endl;

    int x = 42;
    char y = convert_save(x);
    cout << y << endl;
    x = convert_load<int>(&y);
    cout << x << endl;
}

