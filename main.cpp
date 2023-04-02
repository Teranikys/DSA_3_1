#include <iostream>
#include "ADT_static.h"

int main() {
    int n, num;
    ADT_static A;
    while (true){
        std::cout << "Menu\n";
        std::cout << "1. Fill in the array\n";
        std::cout << "2. Print the array\n";
        std::cout << "3. The function to solve the problem\n";
        std::cout << "4. Shut down the program\n";
        std::cout << "Choose an operation and enter its number: ";
        std::cin >> num;

        switch (num) {
            case 1:
                std::cout << "Enter n<" << N << '\n';
                std::cin >> n;
                if (n<0 || n>N) {
                    std::cout << "Entered n<0 or n>N" << '\n';
                    return 1;
                }
                ADT_static::make(A, n);
                break;
            case 2:
                if (A.n > 0)
                    ADT_static::print(A);
                else
                    std::cout << "The array is not filled\n";
                break;
            case 3:
                if (A.n > 0) {
                    ADT_static::zeroFillment(A);
                } else
                    std::cout << "The array is not filled\n";
                break;
            case 4:
                exit(1);
            default:
                std::cout << "Incorrect value\n";
        }
    }
}