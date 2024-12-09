#include <stdio.h>

void main(){
int columA = 1, columB = 1;
int *ptrA, *ptrB;
int C1, C2, C3, C4, C5, C6, CF, CC;

ptrA = &columA;
ptrB = &columB;

    for (int a = 0; a < 11; a++) {
        printf("%d", columA);

        if (a == 2) {
            printf(" %d", CC = *ptrA + *ptrB);
            }
        if (a == 3) {
            printf(" %d %d", CC += *ptrA, CC);
        }
        if (a == 4) {
            C1 = CC;
            C2 = CC;
            CF = C2;
            printf(" %d %d %d", CC += *ptrA, C3 = C2 + C2, CF += *ptrB);
        }
        if (a == 5) {
            C2 = CC;
            printf(" %d %d %d %d", CC+= *ptrA, C2 += C3, C2, CF += *ptrB);
        }
        if (a == 6) {
            C1 = CC;
            C3 = CC;
            printf(" %d %d %d %d %d", CC += *ptrA, C2 += C3, C2 + C2 ,C2, CF += *ptrB);
        }
        if (a == 7) {
            C4 = C2 + C1;
            C3 = CC;
            printf(" %d %d %d %d %d %d", CC += *ptrA, C2 += C3, C4 += C2, C4, C2, CF += *ptrB);
        }
        if (a == 8) {
            C5 = C4;
            C3 = CC;
            printf(" %d %d %d %d %d %d %d", CC += *ptrA, C2 += C3, C4 += C2, C5 + C5, C4, C2, CF += *ptrB);
        }
        if (a == 9) {
            C5 += C5;
            C3 = CC;
            printf(" %d %d %d %d %d %d %d %d", CC += *ptrA, C2 += C3, C4 += C2, C5 += C4, C5, C4, C2, CF += *ptrB);
        }
        if (a == 10) {
            C6 = C5;
            C3 = CC;
            printf(" %d %d %d %d %d %d %d %d %d", CC += *ptrA, C2 += C3, C4 += C2, C5 += C4, C6 + C5, C5, C4, C2, CF += *ptrB);
        }
        if (a != 0) {
            printf(" %d", columB);
        }

        printf("\n");
        
    }
}