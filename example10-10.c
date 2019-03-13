/**
 * 数组和指针
 */
#include <stdio.h>

int main(void)
{
    int i;
    int vc[5] = { 2, 5, 7, 3, 10};
    int *ptr1 = &vc[0];
    int *ptr2;
    ptr2 = &vc[0];

    printf("ptr1的地址是        %p. \n", ptr1);
    printf("ptr2的地址是        %p. \n", ptr2);
    printf("vc[1]的地址是       %p. \n", &vc[1]);
    printf("ptr1 + 1的地址是    %p. \n", ptr1+1);
    printf("ptr1 + 1的地址是    %d. \n", ptr1[2]);
    printf("ptr1 + 1的值是      %d. \n", *(ptr1+1));

    return (0);
}