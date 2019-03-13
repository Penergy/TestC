#include <stdio.h>

void printN(int N);
void printN2(int N);

int main(void)
{
    int N;
    scanf("%d", &N);
    printN2(N);
    return 0;
}

void printN( int N) 
{
    for(int i=1; i<=N; i++){
        printf("%d \n", i);
    }
}

void printN2( int N )
{
    if(N){
        printN2(N-1);
        printf("%d \n", N);
    }
}