#include <iostream>
#include "LettersPasswGenerator.h"

int main() {
    srand(time(0));
    auto lpg = LettersPasswGenerator();
    cout << "-- " << lpg.get_passw() << " --" << endl;
    cout << "-- " << lpg.get_passw() << " --" << endl;
    return 0;
}
