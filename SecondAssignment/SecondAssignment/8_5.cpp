#include <iostream>
using namespace std;

class CPointX {
protected:
    int x;
public:
    //CPointX() {}
    CPointX(int a) :x(a) { cout << "CPointX ������" << endl; }
    ~CPointX() { cout << "CPointX �Ҹ���" << endl; }
    void Print() { cout << "CPointX" << endl; }
};
class CPointXY :public /*virtual*/ CPointX {
protected:
    int y;
public:
    CPointXY(int a, int b) :CPointX(a), y(b) {cout << "CPointXY ������" << endl; }
    ~CPointXY() { cout << "CPointXY �Ҹ���" << endl; }
    void Print() { cout << "CPointXY" << endl; }
};
class CPointXZ :public /*virtual*/ CPointX {
protected:
    int z;
public:
    CPointXZ(int a, int c) :CPointX(a), z(c) { cout << "CPointXZ ������" << endl; }
    ~CPointXZ() { cout << "CPointXZ �Ҹ���" << endl; }
    void Print() { cout << "CPointXZ" << endl; }
};

class CPointXYZ :public CPointXY, public CPointXZ {
private:
    int xyz;
public:
    CPointXYZ(int a, int b, int c) :CPointXY(a, b), CPointXZ(a, c), xyz(0) { cout << "CPointXYZ ������" << endl; }
    ~CPointXYZ() { cout << "CPointXYZ �Ҹ���" << endl; }
    void Print() {
        CPointX::Print();
        CPointXY::Print();
        CPointXZ::Print();
        cout << "CPointXYZ" << endl;
    }
};


void mainInternal() {
    CPointXYZ Pxyz(1, 2, 3);
    Pxyz.Print();
}
int main() {
    mainInternal();
    getchar();
}