#include<stdio.h>
#define NUMBER 6

/*--- 返回元素个数为no的数组vc中的最大值 ---*/
int max_of(const int vc[], int no)
{
    int i;
    int max = vc[0];
    for(i=0; i<no; i++)
    {
        if(vc[i] > max)
        {
            max = vc[i];
        }
    }
    return max;
}

/*--- 返回元素个数为no的数组vc中的最小值 ---*/
int min_of(const int vc[], int no)
{
    int i;
    int min = vc[0];
    for(i=0; i<no; i++)
    {
        if(vc[i] < min)
        {
            min = vc[i];
        }
    }
    return min;
}

/*--- 对元素个数为no的数组vc进行倒序排列 ---*/
void rev_intary(int vc[], int no)
{
    int half_no = no / 2;
    int i;
    for(i=0; i< half_no; i++)
    {
        int temp = vc[i];
        vc[i] = vc[no-i-1];
        vc[no-i-1] = temp;
    }
}

/*--- 对元素个数为no的数组vc进行倒序排列，并将其结果保存在数组v1 ---*/
void intary_rcpy(int vc1[], const int vc2[], int no)
{
    int half_no = no / 2;
    int i;
    for(i=0; i< half_no; i++)
    {
        int temp = vc2[i];
        vc1[i] = vc2[no-i-1];
        vc1[no-i-1] = temp;
    }
}

/*--- 字符串字面量的长度 ---*/
void stringLen()
{
    char ss[] = "ABC";
    printf("sizeof(\"123\")             =%u\n", (unsigned)sizeof("123") );
    printf("sizeof(\"AB\\tC\")          =%u\n", (unsigned)sizeof("AB\tC") );
    printf("sizeof(\"abc\\0def\")       =%u\n", (unsigned)sizeof("abc\0def") );
    printf("sizeof(ss)                  =%u\n", (unsigned)sizeof(ss));
}



int main(){
        int vc[NUMBER] = {13, 26, 37, 46, 15,100};
        int vc2[NUMBER] = {0};
        int result = max_of(vc, NUMBER);
        int min_result = min_of(vc, NUMBER);
        printf("the max value is %d. \n", result);
        printf("the min value is %d. \n", min_result);
        //rev_intary(vc, NUMBER);
        //for(int i=0; i < NUMBER; i++)
        //{
        //    printf("[%d]: %d \n",i, vc[i]);
        //}
        intary_rcpy(vc2, vc, NUMBER);
        for(int i=0; i < NUMBER; i++)
        {
            printf("[%d]: %d \n",i, vc2[i]);
        }
        stringLen();
        return 0;
}
