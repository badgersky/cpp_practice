#include <iostream>
#include "LettersPasswGenerator.h"

int main() {
    auto lpg = LettersPasswGenerator();
    string passw = lpg.generate_passw(10);
    cout << passw << endl;
    return 0;
}
