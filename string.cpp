#include <iostream>
int main(){
    const char* string1 = "Hello";

    std::cout << *(string1+1)  << std::endl;
    return 0;
    

}
