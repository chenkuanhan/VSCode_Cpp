#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    // 設定名稱並返回當前物件的引用
    Person& setName(string n) {
        name = n;
        return *this;  // 回傳當前物件
    }

    // 設定年齡並返回當前物件的引用
    Person& setAge(int a) {
        age = a;
        return *this;  // 回傳當前物件
    }

    // 顯示個人資訊
    void show() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Person p;
    
    // 透過 Chaining 方式設定值
    p.setName("Alice").setAge(25).show();  

    return 0;
}
