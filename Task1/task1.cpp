#include "task1.h"

int main(){
    binary_int a = -2;
    binary_int b = -2;

    // Сложение
    binary_int sum = a + b;
    std::cout << "a + b = " << sum << std::endl;

    // Вычитание
    binary_int diff = a - b;
    std::cout << "a - b = " << diff << std::endl;

    // Унарный минус
    binary_int neg = -a;
    std::cout << "-a = " << neg << std::endl;

    // Инкремент префиксный
    ++a;
    std::cout << "++a = " << a << std::endl;

    // Инкремент постфиксный
    binary_int post_inc = a++;
    std::cout << "a++ = " << post_inc << std::endl;
    std::cout << "a after post-increment = " << a << std::endl;

    // Декремент префиксный
    --a;
    std::cout << "--a = " << a << std::endl;

    // Декремент постфиксный
    binary_int post_dec = a--;
    std::cout << "a-- = " << post_dec << std::endl;
    std::cout << "a after post-decrement = " << a << std::endl;

    // Сложение с присваиванием
    a += b;
    std::cout << "a += b = " << a << std::endl;

    // Вычитание с присваиванием
    a -= b;
    std::cout << "a -= b = " << a << std::endl;

    // Сдвиг влево
    binary_int shift_left = a << binary_int(2);
    std::cout << "a << 2 = " << shift_left << std::endl;

    // Сдвиг влево с присваиванием
    a <<= binary_int(2);
    std::cout << "a <<= 2 = " << a << std::endl;

    // Сдвиг вправо
    binary_int shift_right = a >> binary_int(2);
    std::cout << "a >> 2 = " << shift_right << std::endl;

    // Сдвиг вправо с присваиванием
    a >>= binary_int(2);
    std::cout << "a >>= 2 = " << a << std::endl;

    // Умножение
    binary_int product = a * b;
    std::cout << "a * b = " << product << std::endl;

    // Умножение с присваиванием
    a *= -b;
    std::cout << "a *= -b = " << a << std::endl;

    // Разделение битов
    std::pair<binary_int, binary_int> split = a.in_half();
    std::cout << "High bits of a: " << split.first << std::endl;
    std::cout << "Low bits of a: " << split.second << std::endl;

    return 0;
}
