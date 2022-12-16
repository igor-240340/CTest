#include <avr/io.h>

int main () {
    DDRB = 0xFF;    // PORTB - out

    char* str;
    str = (char*) malloc(12);
    strcpy(str, "Hello world");

    for (int i = 0; i < 11; i++) {
        PORTB = str[i];
    }

    free(str);
}




