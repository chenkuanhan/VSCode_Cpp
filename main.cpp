#include <iostream>
#include <cstring> // C++ 用 <cstring> 來取代 <string.h>

class Person {
private:
    char name[50];
    int age;

public:
    // 建構子 (Constructor)
    Person(const char* name, int age) {
        std::strcpy(this->name, name);
        this->age = age;
    }

    // 方法：輸出個人資訊
    void print() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
}
};

int main() {
    // 創建物件
    Person p1("Alice", 25);
    
    // 呼叫成員函式
    p1.print();

    return 0;
}