#include <avr/io.h>

long int sum(long int a, long int b, long int c) {
    return a + b + c;
}

int main () {
    long int a = 123124234;
    long int b = 123124235;
    long int c = 123124236;

    long int res = sum(a, b, c);
}
