#include <stdio.h>

int main() {
    printf("Size of char: %zu bytes\n", sizeof(char));  // 1 byte
    printf("Size of int: %zu bytes\n", sizeof(int));    // 4 bytes
    printf("Size of float: %zu bytes\n", sizeof(float)); // 4 bytes
    return 0;
}
