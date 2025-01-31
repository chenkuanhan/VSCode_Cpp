#include <iostream>
#include <string>
using namespace std;

// 基類 Animal
class Animal {
protected:
    string name;

public:
    // 構造函數
    Animal(const string& name) : name(name) {}

    // 成員函數 make_sound
    virtual void make_sound() const {
        cout << "Some sound" << endl;
    }
};

// 派生類 Dog
class Dog : public Animal {
public:
    // 使用基類構造函數
    Dog(const string& name) : Animal(name) {}

    // 覆蓋 make_sound 函數
    void make_sound() const override {
        cout << name << " barks: Woof!" << endl;
    }
};

int main() {
    Dog dog("Alice");
    dog.make_sound();  // 輸出: Rex barks: Woof!
    return 0;
}
