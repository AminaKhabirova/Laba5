#include "task1.h"

int binary_int::add(int a, int b) {
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

binary_int &binary_int::operator++ () & {
    this->number = add(this->number, 1);
    return *this;
}

binary_int binary_int::operator++ (int) {
    binary_int temp = *this;
    ++*this;
    return temp;
}

binary_int &binary_int::operator-- () & {
    this->number = add(this->number, add(~1, 1));
    return *this;
}

binary_int binary_int::operator-- (int) {
    binary_int temp = *this;
    --*this;
    return temp;
}

binary_int &binary_int::operator+= (binary_int x) {
    this->number = add(this->number, x.number);
    return *this;
}

binary_int binary_int::operator+ (binary_int x) const {
    binary_int temp = *this;
    temp += x;
    return temp;
}

binary_int &binary_int::operator-= (binary_int x) {
    this->number = add(this->number, add(~x.number, 1));
    return *this;
}

binary_int binary_int::operator- (binary_int x) const {
    binary_int temp = *this;
    temp -= x;
    return temp;
}

binary_int &binary_int::operator*= (binary_int x) {
    binary_int a = *this;
    this->number = 0;
    for (binary_int i = 0; i.number < sizeof(int) << 3; ++i){
        if (x.number & (1 << i.number)){
            *this += a << i;
        }
    }
    return *this;
}

binary_int binary_int::operator* (binary_int x) const {
    binary_int temp = *this;
    temp *= x;
    return temp;
}

binary_int &binary_int::operator<<= (binary_int x) {
    this->number <<= x.number;
    return *this;
}

binary_int &binary_int::operator>>= (binary_int x) {
    this->number >>= x.number;
    return *this;
}

binary_int binary_int::operator<< (binary_int x) const {
    binary_int temp = *this;
    temp <<= x.number;
    return temp;
}

binary_int binary_int::operator>> (binary_int x) const {
    binary_int temp = *this;
    temp >>= x.number;
    return temp;
}

binary_int binary_int::operator& (binary_int x) const {
    return this->number & x.number;
}

std::pair<binary_int, binary_int> binary_int::in_half() const {
    binary_int half_bits = sizeof(int) << 2;
    binary_int mask = ((binary_int)(1) << half_bits) - 1;
    return std::make_pair(((*this >> half_bits) & mask) << half_bits, *this & mask);
}

int binary_int::get_number () const {
    return this->number;
}

std::ostream &operator<< (std::ostream &stream, binary_int x) {
    binary_int value = x.get_number();
    for (binary_int i = ((binary_int)(sizeof(int)) << 3) - 1; i.get_number() >= 0; --i) {
        int bit = (value >> i).get_number() & 1;
        stream << bit;
    }
    return stream;
}