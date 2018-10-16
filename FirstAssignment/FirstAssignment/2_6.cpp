#include <iostream>
int* GetArray(int size) {
    return (int*)malloc(sizeof(int)*size);
}
using namespace std;
int main() {
    int *pAry;
    pAry = GetArray(5);
    for (int i = 0; i < 5; i++) {
        pAry[i] = i;
        cout << &pAry[i] << " : " << pAry[i] << endl;
    }
    cout << endl;
    delete[] pAry;
    getchar();
    getchar();
}