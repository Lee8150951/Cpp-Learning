#include "iostream"
#include "fstream"

using namespace std;

class Person {
public:
    char m_Name[64];
    int m_Age;
};

int main() {
    ofstream ofs;
    ofs.open("person.txt", ios::out | ios::binary);
    Person person = {"Lee", 18};
    ofs.write((const char *)&person, sizeof(Person));
    ofs.close();
    return 0;
}