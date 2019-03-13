/*
    具有超能力
 */
#include <stdio.h>
#include <string.h>

struct gstudent {
    char name[20];      // 姓名
    int height;          // 身高
    float weight;        // 体重
    long schols;        //奖学金 
};

typedef struct {
    char name[20];      // 姓名
    int height;          // 身高
    float weight;        // 体重
    long schols;        //奖学金 
} student;

void superPower(student *std)
{
    if(std->height < 180) std->height = 180;
    if(std->weight > 80) std->weight = 80;
}

int main()
{
    student xiaoming1;
    student xiaoming = { "小明", 175, 60.5, 7000 };

    superPower(&xiaoming);

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