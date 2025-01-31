#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream inputFile("example.txt"); // 開啟檔案
    if (!inputFile) {
        std::cerr << "無法開啟檔案!" << std::endl;
        return 1; // 返回錯誤代碼
    }

    std::string line;
    while (std::getline(inputFile, line)) { // 逐行讀取
        std::cout << line << std::endl; // 輸出每一行
    }

    inputFile.close(); // 關閉檔案
    return 0;
}
