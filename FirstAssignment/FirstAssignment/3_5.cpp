#include <iostream>
typedef struct acc {
    int sum=0, mult=1;
}Acc;
Acc getAcc(int num, int field[]) {
    Acc ret;
    for (int i = 0; i < num; i++) {
        ret.sum += field[i];
        ret.mult*= field[i];
    }
    return ret;
}

using namespace std;
int main() {
    while (1) {
        int num = 0;
        int inputs[5];
        cout << "input number of numbers XD" << endl;
        cin >> num;
        if (num > 5)num = 5;
        if (num < 0)num = 0;
        cout << "input numbers" << endl;
        for (int i = 0; i < num; i++)cin >> inputs[i];
        Acc acc = getAcc(num, inputs);
        cout << acc.sum << " " << acc.mult << endl;
        getchar();
        getchar();
    }
}