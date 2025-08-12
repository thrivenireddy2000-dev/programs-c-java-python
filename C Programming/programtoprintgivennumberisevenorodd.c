#include <stdio.h>

// function declaration
void evencheck(int);

int main() {
    int p = 10;
    evencheck(p);  // function call
    return 0;
}

// function definition
void evencheck(int a) {
    if (a % 2 == 0) {
        printf("even");
    } else {
        printf("odd");
    }
}
