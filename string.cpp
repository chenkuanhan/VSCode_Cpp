#include <iostream>
#include <cstdlib>  // 用於 std::stoi 和 std::stof
using namespace std;

int main() {
    string a = "10";
    string b = "3.0";
    int c = stoi(a)+stoi(b);
    cout << c << endl;  
    return 0;
}
