//
// Created by 1 on 01.12.2024.
//

#ifndef TASK1_H
#define TASK1_H

#include <iostream>

class binary_int {
private:
    int number;
    static int add(int a, int b);
public:
    binary_int();
    binary_int(int x);
    int get_number () const;
    binary_int operator- () const;
    binary_int &operator++ () &;
    binary_int operator++ (int);
    binary_int &operator-- () &;
    binary_int operator-- (int);
    binary_int &operator+= (binary_int x);
    binary_int operator+ (binary_int x) const;
    binary_int &operator-= (binary_int x);
    binary_int operator- (binary_int x) const;
    binary_int &operator*= (binary_int x);
    binary_int operator* (binary_int x) const;
    binary_int &operator<<= (binary_int x);
    binary_int &operator>>= (binary_int x);
    binary_int operator<< (binary_int x) const;
    binary_int operator>> (binary_int x) const;
    binary_int operator& (binary_int x) const;
    std::pair<binary_int, binary_int> in_half() const;
};

std::ostream &operator<< (std::ostream &stream, binary_int x);

#endif //TASK1_H
