#include <iostream>
int main(){
    char str[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    for (int i = 0; str[i] != '\0'; i++){
        std::cout << str[i] << std::endl;

    }
        

}
