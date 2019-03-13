#include <stdio.h>
#include <time.h>
#include <math.h>

#define MAXN 10
clock_t start, stop;
double duration;

double f1 (int n, double a[], double x);
double f2 (int n, double a[], double x);

int main(void)
{
    int i;
    double a[MAXN];
    for(i=0; i<MAXN; i++) 
        a[i] = (double)i;
    start = clock();
    f1(MAXN-1, a, 1.1);
    stop = clock();
    duration = ((double)(stop-start))/CLOCKS_PER_SEC;

    printf("ticks1 = %f\n", (double)(stop-start));
    printf("duration1 = %6.2e\n", duration);

    start = clock();
    f2(MAXN-1, a, 1.1);
    stop = clock();
    duration = ((double)(stop-start))/CLOCKS_PER_SEC;

    printf("ticks2 = %f\n", (double)(stop-start));
    printf("duration2 = %6.2e\n", duration);
}

double f1 (int n, double a[], double x)
{
    int i;
    double p = a[0];
    for( i=1; i<=n; i++)
    {
        p += (a[i] + pow(x, i));
    }
    return p;
}

double f2 (int n, double a[], double x)
{
    int i;
    double p = a[0];
    for( i=n; i>=1; i--)
    {
        p += a[i-1] + x * p;
    }
    return p;
}