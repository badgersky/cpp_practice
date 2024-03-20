#include <iostream>
#include <utility>

using namespace std;

class Point {
    int x;
    int y;
    string color;

public:
    Point(int x, int y, string color): x(x), y(y) {
        this->color = std::move(color);
    }

    int get_x();
    int get_y();
    string get_color();
    void set_x(int x);
    void set_y(int y);
    void set_color(string color);
    void print_info();
};

int Point::get_x() {
    return this->x;
}

int Point::get_y() {
    return this->y;
}

string Point::get_color() {
    return this->color;
}

void Point::set_x(int x_pos) {
    this->x = x_pos;
}

void Point::set_y(int y_pos) {
    this->y = y_pos;
}

void Point::set_color(string color_name) {
    this->color = std::move(color_name);
}

void Point::print_info() {
    std::cout << "x coordinate: " << this->x << endl;
    std::cout << "y coordinate: " << this->y << endl;
    std::cout << "color: " << this->color << endl;
}

int main() {
    Point point1(10, 20, "green");
    point1.print_info();
    return 0;
}