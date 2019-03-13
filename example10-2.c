/*
    显示对象的地址
*/
#include <stdio.h>

int main(void)
{
    int nx;
    double dx;
    int vc[3];

    printf("nx的地址是      %p\n", &nx); 
    printf("dx的地址是      %p\n", &dx); 
    printf("vc的地址是      %p\n", &vc); 
    printf("vc[0]的地址是   %p\n", &vc[0]); 
    printf("vc[1]的地址是   %p\n", &vc[1]); 
    printf("vc[2]的地址是   %p\n", &vc[2]); 
    printf("sizef(vc[0])       =%u. \n", (unsigned)sizeof(vc[0]));

    return(0);

}