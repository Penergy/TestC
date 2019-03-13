/*
    计算两个整数的和与差
*/
#include <stdio.h>

/*--- 将n1和n2的和、差分别保存至sum、diff ---*/
void swap(double *na, double *nb)
{
    double temp = *na;
    *na = *nb;
    *nb = temp; 
}

int main(void)
{
    double na, nb;

    puts("请输入两个实数。");
    printf("实数A: "); scanf("%lf", &na);
    printf("实数B: "); scanf("%lf", &nb);

    swap(&na, &nb);

    printf("A是%f. \n", na);
    printf("B是%f. \n", nb);
    

    return(0);

}