#include <stdio.h>

int main()

{
    printf("Enter a character.\n");
    char character =getchar();
    printf("The ASCII code is: %u\n", character);
    printf("The octal value is: %o\n", character);
    printf("The hexadecimal value is: %x\n", character);
    return 0;
}
