#include <iostream>
using namespace std;
class CComplex {
public:
    double realNum = 0, virtualNum = 0;
    CComplex(double real, double vir) {
        realNum = real;
        virtualNum = vir;
    }
    const CComplex operator+(const CComplex& b);
    const CComplex operator-(const CComplex& b);
    const CComplex operator-(double b);
    const CComplex operator+(double b);
};
ostream& operator<<(ostream& os, const CComplex& data) {
    cout << data.realNum << " + " << data.virtualNum<<"i";
    return os;
}
const CComplex CComplex::operator+(const CComplex& b) {
    return CComplex(realNum + b.realNum, virtualNum + b.virtualNum);
}
const CComplex CComplex::operator-(const CComplex& b) {
    return CComplex(realNum - b.realNum, virtualNum - b.virtualNum);
}
const CComplex CComplex::operator-(double b) {
    return CComplex(realNum - b, virtualNum);
}
const CComplex CComplex::operator+(double b) {
    return CComplex(realNum + b, virtualNum);
}
CComplex operator+(double b, CComplex& a) {
    return a + b;
}
CComplex operator-(double b, CComplex& a) {
    return a - b;
}





int main() {
    CComplex C1(1, 2), C2(3, 4);
    double a = 2;
    CComplex C3 = C1 + C2;
    CComplex C4 = C1 - C2;
    CComplex C5 = C1 - a;
    CComplex C6 = a - C1;

    cout << C3 << endl << C4 << endl << C5 << endl << C6 << endl;

    getchar();
}