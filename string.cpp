#include <iostream>
int main(){
    std::string string1 = "Hello";
    std::string *ptr= &string1;
    std::cout << *ptr  << std::endl;
    return 0;
    

}
