#include <stdio.h>
#include <stdlib.h>
//#include <stdbool.h>
#define MAXSIZE 1000


void eratosthenes(char num[]){
    int factor = 2;
    while(factor < MAXSIZE) {
        if (num[factor]) {
            for (int i = factor + 1; i < MAXSIZE; i++) {
                if (i % factor == 0)
                    num[i] = 0;
            }
        }
        factor++;
    }
}
int main() {

    char num[MAXSIZE];
    for(int i = 1; i< MAXSIZE; i++)
        num[i] = 1;
    eratosthenes(num);
    for(int i = 1; i < MAXSIZE; i++) {
        if (num[i])
            printf("%d ", i);
    }
//    printf("Hello, World!\n");
    return 0;
}