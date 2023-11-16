#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int soma(int x, int y) {
    return x + y + 1;
}

int main() {
    assert(soma(2,3) == 5);
    assert(soma(4,10) == 14);
    assert(soma(2,2) != 5);
    return EXIT_SUCCESS;
}
