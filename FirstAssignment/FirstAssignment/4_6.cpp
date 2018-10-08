#include <iostream>

class CPoint {
    int result1 = -1, result2 = -1;
public:
    CPoint() {
        result1 = 0;
        result2 = 0;
    };
    CPoint(int input) {
        result1 = input;
        result2 = input;
    };
    CPoint(int input1, int input2) {
        result1 = input1;
        result2 = input2;
    };
    CPoint(int input1, int input2, int input3) {
        result1 = input1 + input2 + input3;
        result2 = input1 * input2*input3;
    };
    void Print() {
        std::cout << "(" << result1 << ", " << result2 << ")" << std::endl;
    }
};
int main() {
    CPoint P1;
    CPoint P2(1);
    CPoint P3(2, 3);
    CPoint P4(4, 5, 6);
    P1.Print();
    P2.Print();
    P3.Print();
    P4.Print();
    getchar();
    getchar();
}