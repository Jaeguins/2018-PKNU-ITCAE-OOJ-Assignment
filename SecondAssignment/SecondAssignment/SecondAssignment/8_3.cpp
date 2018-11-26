#include <iostream>
#define PI 3.14159265f
using namespace std;
class CPoint {
public:
    int x, y;
    CPoint(int x, int y) { move(x, y); }
    void move(int x, int y) {
        this->x = x;
        this->y = y;
    }
    void draw() { cout << x << ", " << y; }
};
class CCircle :public CPoint {
public:
    int rad;
    CCircle(int x, int y, int rad) :CPoint(x, y) { this->rad = rad; }
    float GetArea() { return rad * rad / 2.0f*PI; }
    void draw() {
        CPoint::draw();
        cout << ", " << rad;
    }
};
int main() {
    CCircle p(3, 3, 5);
    ((CPoint)p).draw();
    cout << endl;
    p.move(2, 2);
    p.draw();
    cout << endl;
    cout << p.GetArea();
    getchar();
}
