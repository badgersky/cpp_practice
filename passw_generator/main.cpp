#include <iostream>
#include "LettersPasswGenerator.h"
#include "NumberPasswGenerator.h"

int main() {
    srand(time(0));

    auto npg = NumberPasswGenerator();
    auto lpg = LettersPasswGenerator();
    string passw1 = npg.generate_passw(10);
    string passw2 = lpg.generate_passw(10);
    npg.set_passw(passw1);
    lpg.set_passw(passw2);

    cout << npg.get_passw() << endl;
    cout << lpg.get_passw() << endl;
}
