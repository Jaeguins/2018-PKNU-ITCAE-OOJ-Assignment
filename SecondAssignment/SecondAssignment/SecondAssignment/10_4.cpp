#include <iostream>

template<class A, class B>
class CArray {
public:
    A arrA[10];
    B arrB[10];
    int length = 0;
    int rearA = 0, rearB = 0;
    void put(A a, B b) {
        this->arrA[this->rearA++] = a;
        this->arrB[this->rearB++] = b;
        length ++;
    }
};
template< class A, class B >
std::ostream& operator<<(std::ostream& os, const CArray<A, B>& arr) {
    for (int i = 0; i < arr.length; i++)
        os <<"{" <<arr.arrA[i]<<", " <<arr.arrB[i]<<"}\n";
    return os;
}
int main() {
    CArray<int, char> obj;
    obj.put(5, 'b');
    obj.put(4, 'c');
    std::cout << obj;
    getchar();
}
