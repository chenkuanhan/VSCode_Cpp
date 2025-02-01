#include <iostream>
class Outer {
public:
    class Inner {
    public:
        static void hello() {
            std::cout << "Hello from Inner class" << std::endl;
        }
    };
};

int main() {
    Outer::Inner::hello(); // 這是作用域解析，不是 Chaining
    return 0;
}
