#include <iostream>
using namespace std;

class CPoint {
private:
    int x, y;
    CPoint(int a, int b) :x(a), y(b) { }
public:
    static CPoint GetPoint(int a, int b) {
        return CPoint(a, b);
    }
    void print() {
        cout << x << ", " << y << endl;
    }
};

int main() {
    CPoint P1 = CPoint::GetPoint(1, 2);
    CPoint P2 = CPoint::GetPoint(3, 4);
    P1.print();
    P2.print();
    getchar();
}