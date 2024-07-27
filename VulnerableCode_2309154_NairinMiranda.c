#include <stdio.h>
#include <string.h>

void vulnerable_function(char *str) {
    char buffer[16];
    strcpy(buffer, str);
    printf("Buffer content: %s\n", buffer);
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <string>\n", argv[0]);
        return 1;
    }
    vulnerable_function(argv[1]);
    return 0;
}
