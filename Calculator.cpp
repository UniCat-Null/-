#include <iostream>

class Calc {
public:
    void calcX() {
        int innum;
        int innum0;
        char inprocess;

        std::cout << "num 1: ";
        std::cin >> innum;
        std::cout << "num 2: ";
        std::cin >> innum0;
        std::cout << "+, -, /, *: ";
        std::cin >> inprocess;


        switch (inprocess) {
        case '+': std::cout << innum + innum0 << std::endl; system("pause");
        case '-': std::cout << innum - innum0 << std::endl; system("pause");
        case '*': std::cout << innum * innum0 << std::endl; system("pause");
        case '/': if (innum0 != 0) {
            std::cout << innum / innum0 << std::endl; system("pause");
        }
                else {
            std::cout << "null --> /" << std::endl;
            system("pause");
            }
        }
    }
};

int main()
{
    Calc X;
    X.calcX();
    return 0;
}