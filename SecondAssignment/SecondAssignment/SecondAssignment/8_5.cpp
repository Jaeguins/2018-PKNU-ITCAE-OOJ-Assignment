#include <iostream>
using namespace std;

class CPointX {
protected:
    int x;
public:
    //CPointX() {}
    CPointX(int a) :x(a) { cout << "CPointX 持失切" << endl; }
    ~CPointX() { cout << "CPointX 社瑚切" << endl; }
    void Print() { cout << "CPointX" << endl; }
};
class CPointXY :public /*virtual*/ CPointX {
protected:
    int y;
public:
    CPointXY(int a, int b) :CPointX(a), y(b) {cout << "CPointXY 持失切" << endl; }
    ~CPointXY() { cout << "CPointXY 社瑚切" << endl; }
    void Print() { cout << "CPointXY" << endl; }
};
class CPointXZ :public /*virtual*/ CPointX {
protected:
    int z;
public:
    CPointXZ(int a, int c) :CPointX(a), z(c) { cout << "CPointXZ 持失切" << endl; }
    ~CPointXZ() { cout << "CPointXZ 社瑚切" << endl; }
    void Print() { cout << "CPointXZ" << endl; }
};

class CPointXYZ :public CPointXY, public CPointXZ {
private:
    int xyz;
public:
    CPointXYZ(int a, int b, int c) :CPointXY(a, b), CPointXZ(a, c), xyz(0) { cout << "CPointXYZ 持失切" << endl; }
    ~CPointXYZ() { cout << "CPointXYZ 社瑚切" << endl; }
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