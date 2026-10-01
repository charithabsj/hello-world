#include <stdio.h>
void greet(const char *name);
int main() {
    greet("Charitha");
    return 0;
}
void greet(const char *name) {
    printf("Hello, %s! Welcome to your GitHub portfolio.\n", name);
}

