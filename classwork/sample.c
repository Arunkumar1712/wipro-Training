#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Number of command-line arguments: %d\n", argc);
    printf("Program name: %s\n", argv[0]);

    printf("Command-line arguments:\n");
    for (int i = 1; i < argc; i++) {
        printf("%d: %s\n", i, argv[i]);
    }

    return 0;
}
