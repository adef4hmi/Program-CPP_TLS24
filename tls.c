#include <iostream>
#include <cmath>

int main() {
    double x;
    
    std::cout << "Masukkan sebuah angka: ";
    std::cin >> x;

    if (x > 0) {
        std::cout << x << " adalah bilangan positif." << std::endl;
        std::cout << "Akar kuadrat dari " << x << " adalah: " << sqrt(x) << std::endl;
    } else if (x < 0) {
        std::cout << x << " adalah bilangan negatif." << std::endl;
    } else {
        std::cout << "Angka yang Anda masukkan adalah nol." << std::endl;
    }
std::cout << "Kuadrat dari " << x << " adalah: " << pow(x, 2) << std::endl;
    return 0;
}
