#include <iostream>
int* GetArray(int size) {
    return (int*)malloc(sizeof(int)*size);
}
using namespace std;
int main() {
    int *pAry;
    pAry = GetArray(5);
    for (int i = 0; i < 5; i++)
        cout << pAry[i] << " ";
    cout << endl;
    delete[] pAry;
    getchar();
    getchar();
}