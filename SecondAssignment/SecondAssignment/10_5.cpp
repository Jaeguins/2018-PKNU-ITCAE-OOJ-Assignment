#include<iostream>
template <typename T>
T Sum(T a, T b) {
    T c = a + b;
    return c;
}
template<>
int Sum(int a, int b) {
    int c = a * b;
    return c;
}
int Sum(double a, double b) {
    int c = a - b;
    return c;
}


int main() {
    int a = 5, b = 7;
    char e = 5, f = 7;
    double c = 5.0, d = 7.0;
    printf("%d\n%d\n%d\n%d\n%lf",
        Sum(a, b),
        Sum(c, d),
        Sum<char>(e, f),
        Sum<int>(a,b),
        Sum<double>(c,d)
    );
    getchar();
    getchar();
}