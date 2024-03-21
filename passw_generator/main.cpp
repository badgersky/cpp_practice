#include <iostream>
#include "LettersPasswGenerator.h"

int main() {
    auto lpg = LettersPasswGenerator();
    string passw = lpg.generate_passw(10);
    lpg.set_passw(passw);
    cout << "-- " << lpg.get_passw() << " --" << endl;
    return 0;
}
