#include <stdio.h>

/* int parity (int n) {
    if (n % 2 == 0) 
        return 0;
    else return 1;
}

int main () {
    printf("%d\n", parity(5));
    printf("%d\n", parity(-3));
    printf("%d\n", parity(6));
} */

void print_noSpace(const char *str) {
    for(int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ')
            printf("%c", str[i]);
    }
}

int main() {
    print_noSpace("Hello, World!\n");
    print_noSpace("My Name Is Doodle\n");
}