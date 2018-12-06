#include <iostream>
using namespace std;
class CPoint {
private :
    int x;
    int y;
public :
    CPoint(int a=0,int b=0):x(a),y(b){}
    CPoint operator++(int NotUsed) {
        CPoint temp = (*this); x++; y++; return temp;}
    CPoint &operator++() { x++; y++; return(*this); }
    void Print() { cout << "(" << x << ", " << y << ")" << endl;
    }

};

int main() {
    CPoint P1(1, 1);
    CPoint P2=++P1++;
    CPoint P3=(++P1)++;
    P1.Print();
    P2.Print();
    P3.Print();
    getchar();
}