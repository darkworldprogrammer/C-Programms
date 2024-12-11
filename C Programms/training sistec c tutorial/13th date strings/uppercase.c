// lowercase into uppercase
#include <stdio.h>
#include <string.h>

int main() {
    char name[50];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    strlen(name);
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] >= 'a' && name[i] <= 'z') {
            name[i] = name[i] - 32;
        }
    }

    printf("Hello, ");
    puts(name);
    return 0;
}
