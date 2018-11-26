#include <iostream>
using namespace std;

template<class T>
class CPoint {
public:
    T x, y;
    CPoint(T x, T y) {
        this->x = x;
        this->y = y;
    }
    CPoint operator+(CPoint& m) {
        return CPoint<T>(x+m.x,y+m.y);
    }
    
};
template<class T>
ostream& operator<<(ostream& os, const CPoint<T>& point) {
    os << "[" << point.x << ", " << point.y << "]";
    return os;
}

//mainÀº µ¿ÀÏ.
int main() {
    CPoint<int> a(1, 2);
    CPoint<int> b(3, 4);
    CPoint <int> c = a + b;
    cout << a << "+" << b << "=" << c << endl;

    CPoint<double> d(1.2, 3.4);
    CPoint<double> e(5.6, 7.8);
    CPoint <double> f = d + e;
    cout << d << "+" << e << "=" << f << endl;
    getchar();
}