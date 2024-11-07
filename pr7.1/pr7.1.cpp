#include <iostream>

bool isPrime(int number) {
    if (number <= 1) {
        return false; 
    }
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false; 
        }
    }
    return true; 
}

int main() {
    setlocale(0, "ru");
    int num;

    do {
        std::cout << "Введите целое число\n -> ";
        std::cin >> num; 

        if (isPrime(num)) {
            std::cout << num << " - простое число." << std::endl;
        }
        else {
            std::cout << num << " - не простое число." << std::endl;
        }

    } while (false); 

    return 0;
}
