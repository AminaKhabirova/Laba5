#include "task1.h"

int add(int a, int b) {
    while (b != 0) {
        int carry = a & b;
        a = a ^ b;
        b = carry << 1;
    }
    return a;
}

binary_int::binary_int() {
    number = 0;
}

binary_int::binary_int(int x) {
    number = x;
}

binary_int binary_int::operator- () const {
    return add(~this->number, 1);
}