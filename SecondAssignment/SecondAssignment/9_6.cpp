#include <iostream>
using namespace std;
class CShape abstract {
public:
    int x, y;
    CShape(int x, int y) {
        this->x = x;
        this->y = y;}
    virtual void print() {cout << x << ", " << y;}};
ostream& operator<<(ostream&os, CShape& cs) {
    cs.print();
    return os;}
class CCircle : public CShape {
public:
    int r;
    CCircle(int x, int y, int r) :CShape(x, y) {this->r = r;}
    void print() {
        CShape::print();
        cout << ", " << r << endl;}
};
class CRect : public CShape {
public:
    int w,h;
    CRect(int x, int y, int w,int h) :CShape(x, y) {
        this->w = w;
        this->h = h;}
    void print() {
        CShape::print();
        cout << ", " << w << ", " << h << endl;
    }
};
//main 함수는 동일
int main() {
    CCircle Cir(1, 1, 1);
    CRect Rect(2, 2, 2, 2);
    CShape *pSpe;
    pSpe = &Cir;
    cout << *pSpe;
    pSpe = &Rect;
    cout << *pSpe;
    getchar();
}