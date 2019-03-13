/*
    计算两个整数的和与差
*/
#include <stdio.h>

/*--- 将n1和n2的和、差分别保存至sum、diff ---*/
void sum_diff(int n1, int n2, int sum, int diff)
{
    sum = n1 + n2;
    diff = (n1 > n2)? (n1-n2):(n2-n1);
}

int main(void)
{
    int na, nb;
    double nc;
    int wa=0, sb=0;

    puts("请输入两个整数。");
    printf("整数A: "); scanf("%d", &na);
    printf("整数B: "); scanf("%d", &nb);

    sum_diff(na, nb, wa, sb);

    printf("两数之和是%d. \n两数之差是%d. \n", wa, sb);
    printf("sizef(na)       =%u. \n", (unsigned)sizeof(na));
    printf("sizef(nc)       =%u. \n", (unsigned)sizeof(nc));
    

    return(0);

}