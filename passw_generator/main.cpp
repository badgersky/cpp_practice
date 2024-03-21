#include <iostream>
#include "LettersPasswGenerator.h"
#include "NumberPasswGenerator.h"
#include "NumberLetterPasswGenerator.h"

int main() {
    srand(time(0));

    auto nlpg = NumberLetterPasswGenerator();
    auto npg = NumberPasswGenerator();
    auto lpg = LettersPasswGenerator();
    string passw1 = npg.generate_passw(10);
    string passw2 = lpg.generate_passw(10);
    string passw3 = nlpg.generate_passw(10);
    npg.set_passw(passw1);
    lpg.set_passw(passw2);
    nlpg.set_passw(passw3);

    cout << npg.get_passw() << endl;
    cout << lpg.get_passw() << endl;
    cout << nlpg.get_passw() << endl;
}
