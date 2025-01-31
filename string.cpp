#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    Person(string n, int a) {
    name = n;
    age = a;
}



};

int main() {
    Person p("Alice", 30);
    cout << p.name << " " <<p.age << endl; // 
}
