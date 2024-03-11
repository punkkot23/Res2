#include <iostream>
#include <math.h>

int main()
{
    char ch = 0;
    //-128 127
    unsigned char uch = 0;
    //0 255
    short sh = 0;
    //-2^15 2^15-1
    unsigned short ush = 0;
    //0 2^16-1
    int in = 0;
    //-2^31 2^31-1
    unsigned int uin = 0;
    //0 2^32-1
    long long ll = 0;
    //-2^63 2^63-1
    unsigned long long ull = 0;
    //0 2^64-1

    unsigned int a = 36469;
    unsigned int b = 45638;
    unsigned int c = sqrt(a*a + b*b);
    // Гипотенуза (c) равна корню суммы квадратов двух катетов (a, b) прямоугольного треугольника
    // 'Unsigned' потому что длины катетов и гипотенузы не могут быть отрицательны следовательно нет смысла в отрицательных значениях переменных
    // 'int' - для сбалансированного использования памяти и нормального "потолка" входных данных (потолок входных данных около 46000 на катет)
    std::cout << c << std::endl;
    return 0;
}
