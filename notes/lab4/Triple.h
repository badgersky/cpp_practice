template <typename T1, typename T2, typename T3>
class Triple {
    T1 st;
    T2 nd;
    T3 rd;
public:
    Triple(T1 x, T2 y, T3 z): st(x), nd(y), rd(z) {};
    ~Triple() = default;
    T1 first() {return st;}
    T2 second() {return nd;}
    T3 third() {return rd;}
};
