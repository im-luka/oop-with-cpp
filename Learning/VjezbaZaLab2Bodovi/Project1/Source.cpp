#include <iostream>
#include <cstring>

using namespace std;

class Student {
    char* JMBAG;
public:
    Student() {}
    Student(const char* jmbag) {
        JMBAG = new char[11];
        strcpy_s(JMBAG, 11, jmbag);
    }
    ~Student() {
        delete[] JMBAG;
    }
    char* GetJMBAG() const {
        return JMBAG;
    }
    void SetJMBAG(const char* noviJMBAG) {
        strcpy_s(JMBAG, 11, noviJMBAG);
    }
};
int main() {
    Student Ante("1122334455");
    Student Ivica = Ante;
    Ante.SetJMBAG("6677889900");
    cout << Ante.GetJMBAG() << endl; // 6677889900
    cout << Ivica.GetJMBAG() << endl; // 6677889900 ?!?!
    Student Marko;
    Marko = Ante;
    Marko.SetJMBAG("1234567890");
    cout << Marko.GetJMBAG() << endl; // 1234567890
    cout << Ante.GetJMBAG() << endl; // 1234567890 ?!?!
    system("pause");
    return 0;
}