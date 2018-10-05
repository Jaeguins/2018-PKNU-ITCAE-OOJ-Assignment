#include<iostream>

struct rectangle {
    int width;
    int height;
}typedef Rectangle;
template<class type>
void swap(type* p1, type* p2) {
    type t = *p1;
    *p1 = *p2;
    *p2 = t;
}

void main() {
    int a, b;
    Rectangle c, d;
    a = 5, b = 3;
    c.width = 1;
    c.height = 2;
    d.width = 3;
    d.height = 4;
    std::cout << a << " " << c.width << " " << c.height<<std::endl;
    swap<int>(&a, &b);
    swap<Rectangle>(&c, &d);
    std::cout << a << " " << c.width << " " << c.height<<std::endl;
}