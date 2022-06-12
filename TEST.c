#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int SUPER_DEKAI_HAIRETU[10000000];

void swap(int a, int b);
void init_array();

int main() {
    init_array();

    for(int i = 9999800; i < 10000000; i++) {
        printf("%d\n", SUPER_DEKAI_HAIRETU[i]);
    }
}

void swap(int a, int b) {
    int foo;
    foo = SUPER_DEKAI_HAIRETU[a];
    SUPER_DEKAI_HAIRETU[a] = SUPER_DEKAI_HAIRETU[b];
    SUPER_DEKAI_HAIRETU[b] = foo;
}

void init_array(){
    int index = 0;
    for(int i = 1; i <= 100; i++) {
        for(int j = 100000; j <= 199999; j++) {
            SUPER_DEKAI_HAIRETU[index] = i * 1000000;
            SUPER_DEKAI_HAIRETU[index] += j;
            index++;
        }
    }
}
