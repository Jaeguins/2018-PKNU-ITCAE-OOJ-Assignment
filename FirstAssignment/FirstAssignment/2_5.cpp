#include <iostream>
int GetSum(int a1 = 0, int a2 = 0, int a3 = 0, int a4 = 0, int a5 = 0) {
    return a1 + a2 + a3 + a4 + a5;
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
        switch (num) {
        case 0:
            cout << GetSum() << endl;
            break;
        case 1:
            cout << GetSum(inputs[0]) << endl;
            break;
        case 2:
            cout << GetSum(inputs[0], inputs[1]) << endl;
            break;
        case 3:
            cout << GetSum(inputs[0], inputs[1], inputs[2]) << endl;
            break;
        case 4:
            cout << GetSum(inputs[0], inputs[1], inputs[2], inputs[3]) << endl;
            break;
        case 5:
            cout << GetSum(inputs[0], inputs[1], inputs[2], inputs[3], inputs[4]) << endl;
            break;
        }

    }
}