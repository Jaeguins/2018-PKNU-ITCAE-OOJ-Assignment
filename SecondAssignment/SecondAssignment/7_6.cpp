#include <iostream>
#include <string>
using namespace std;
class CArray {
public:
    int data[5];
    CArray() { for (int i = 0; i < 5; i++) data[i] = i; }
    void Print() { for (int i = 0; i < 5; i++) cout << data[i] << " "; cout << endl; }
};
CArray operator+(CArray tk,int notused) {
    CArray t(tk);
    int last = t.data[4];
    for (int i = 4; i >= 1; i--) t.data[i] = t.data[i - 1];
    t.data[0] = last;
    return t;
}
CArray operator-(CArray tk,int notused) {
    CArray t(tk);
    int last = t.data[0];
    for (int i = 0; i < 4; i--) t.data[i] = t.data[i + 1];
    t.data[4] = last;
    return t;
}
CArray& operator+(CArray& ar) {
    int last = ar.data[4];
    for (int i = 4; i >= 1; i--) ar.data[i] = ar.data[i - 1];
    ar.data[0] = last;
    return ar;
}
CArray& operator-(CArray& ar) {
    CArray t(ar);
    int last = ar.data[0];
    for (int i = 0; i < 4; i++) ar.data[i] = ar.data[i + 1];
    ar.data[4] = last;
    return ar;
}
//�����Լ��� ����

int main() {
    CArray ary1;
    ary1.Print();
    CArray ary2 = +ary1;
    ary1.Print();
    ary2.Print();
    -(-ary1);
    ary1.Print();
    getchar();
}