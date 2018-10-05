#include<iostream>
int power(int value, int pow) {
    if (pow == 0)return 1;
    else return value * power(value, pow - 1);
}
int main() {
    int value, pow;
    std::cin >> value >> pow;
    int output = power(value, pow);
    std::cout << output;
    getchar();
    getchar();
}