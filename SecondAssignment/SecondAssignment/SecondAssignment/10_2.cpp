#include <iostream>
using namespace std;

template <class T>
T Max(T* arr, int length) {
    if (length < 1)return NULL;
    T ret = arr[0];
    if (length < 2)return ret;
    for (int i = 1; i < length; i++) {
        if (ret < arr[i])ret = arr[i];
    }
    return ret;
}
//main함수는 동일.


int main() {
    int ary1[4] = { 4,5,2,7 };
    double ary2[5] = { 1.1,4.4,8.8,4.2,5.5 };
    cout << Max(ary1, 4) << endl;
    cout << Max(ary2, 5) << endl;
    getchar();
}