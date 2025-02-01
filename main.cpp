#include <iostream>
namespace LongNamespaceName {
    namespace SubNamespace {
        int value = 100;
    }
}

// 使用別名來縮短名稱
namespace LSN = LongNamespaceName::SubNamespace;

int main() {
    std::cout << LSN::value << std::endl;
    return 0;
}
