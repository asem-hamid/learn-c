// the %u format specifier is used to print an unsigned integer value.

#include <stdio.h>

int main() {
    int signedInt = -10;
    unsigned int unsignedInt = 10;

    // Print signed integer using %d
    printf("Signed integer: %d\n", signedInt);  // -10

    // Print unsigned integer using %u
    printf("Unsigned integer: %u\n", unsignedInt);  // 10

    // Print unsigned integer with negative value (for demonstration)
    printf("Unsigned representation of -10: %u\n", signedInt);   // 4294967286

    return 0;
}
