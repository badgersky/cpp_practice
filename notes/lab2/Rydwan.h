#include "Vehicle.h"

// dziedziczenie po klasie vehicle
class Rydwan: public Vehicle {
    unsigned number_of_horses;

public:
    Rydwan();

    Rydwan(const string &name, const string &model, unsigned n, unsigned horses);

    unsigned get_number_of_horses();

    void set_number_of_horses(unsigned n);

    void print() override;  // override sprawia ze jesli bedzie literuwka to wyrzuci blad kompilacji

    ~Rydwan();

    void turn_right();
};
