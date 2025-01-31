#include <iostream>
class MyNumber {
    private:
    int value;

public:
    // Constructor
    MyNumber(int val) : value(val) {}

    // Overloading += operator
    MyNumber& operator+=(const MyNumber& other) {
        this->value += other.value;
        return *this; // Returning *this allows chaining (e.g., a += b += c)
    }

    // Friend function to allow easy printing
    friend std::ostream& operator<<(std::ostream& os, const MyNumber& num) {
        os << num.value;
        return os;
    }

};
int main() {
    MyNumber a(10);
    MyNumber b(5);
    MyNumber c(3);

    a += b += c;  // Equivalent to: b = b + c; then a = a + b;
    std::cout << "a: " << a << std::endl;  // Output: a: 18
    std::cout << "b: " << b << std::endl;  // Output: b: 8
    return 0;

}