#include<iostream>

class CStudent {
public:
    char name[20];
    int number;
    int age;
    CStudent(char* name, int number, int age);
    char* getName();
    int getNumber();
    int getAge();
    void setName(char name[20]);
    void setNumber(int number);
    void setAge(int age);
};
CStudent::CStudent(char* name, int number, int age) {
    setName(name);
    setNumber(number);
    setAge(age);
}
char* CStudent::getName() {
    return this->name;
}
int CStudent::getNumber() {
    return this->number;
}
int CStudent::getAge() {
    return this->age;
}
void CStudent::setName(char name[20]) {
    for (int i = 0; i < 20; i++) {
        this->name[i] = name[i];
    }
}
void CStudent::setNumber(int number) {
    this->number = number;
}
void CStudent::setAge(int age) {
    this->age = age;
}

using namespace std;

int main() {
    char tName[20];
    int tNum, tAge;
    cin >> tName >> tNum >> tAge;
    CStudent stud = CStudent(tName, tNum, tAge);
    cout << stud.name << " " << stud.number << " " << stud.age << endl;
    getchar();
    getchar();
}