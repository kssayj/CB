#include <iostream>
int main()
{
    int num;
    std::cout << "n = "; std::cin >> num;
    for (int i = 1; i <= num; ++i) {
        for (int j = 1; j <= num - i; ++j) {
            std::cout << " ";
        }
        std::cout << "/";
        for (int j = 1; j <= 2 * i - 2; ++j) {
            std::cout << " ";
        }
        std::cout << "\\" << std::endl;
    }
    for (int i = 1; i <= num; ++i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << " ";
        }
        std::cout << "\\";
        for (int j = 1; j <= 2 * (num - i); ++j) {
            std::cout << " ";
        }
        std::cout << "/" << std::endl;
    }
    return 0;
}