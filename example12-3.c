/*
 用显示结构体的方式显示小明的信息
 */
#include <stdio.h>
#include <string.h>

struct gstudent {
    char name[20];      // 姓名
    int height;          // 身高
    float weight;        // 体重
    long schols;        //奖学金 
};

int main()
{
    struct gstudent xiaoming1;
    struct gstudent xiaoming = { "小明", 175, 60.5 };

    // strcpy(xiaoming.name, "小明");
    // xiaoming.height = 175;
    // xiaoming.weight = 60.6;
    // xiaoming.schols = 70000;

    printf("姓名    = %s \n", xiaoming.name);
    printf("身高    = %d \n", xiaoming.height);
    printf("体重    = %f \n", xiaoming.weight);
    printf("奖学金  = %ld \n", xiaoming.schols);

    return 0;
}