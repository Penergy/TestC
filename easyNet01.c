#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MaxSize 100
#define NUMBER '0'

typedef struct {
    double Data[MaxSize];
    int Top;
} Stack;

int CreateStack(Stack **stack)
{
    *stack = (Stack*)malloc(sizeof(Stack));
    if(*stack == NULL)
    {
        return -1;
    }
    (*stack)->Top = -1;
    return 0;
}

void Push(Stack *PtrS, double item )
{
    if(PtrS->Top == MaxSize-1)
    {
        printf("Stack is full");
        return;
    } else
    {
        PtrS->Data[++(PtrS->Top)] = item;
    }
    return;
    
}

double Pop(Stack *PtrS)
{
    if( PtrS->Top == -1)
    {
        printf("Stack is empty.");
        return 0.0;
    }else
    {
        return (PtrS->Data[(PtrS->Top)--]);
    }
    
}

int getchar1(char c)
{
    if(c>='0'&&c<='9') return NUMBER;
    return c;
}

int main(void)
{
    Stack *Ptrs;
    int ret = CreateStack(&Ptrs);
    char test[] = "293/+5-";
    int length = sizeof(test);
    double item;
    double op1;
    double op2;
    for(int i = 0; i < length; i++)
    {
        char temp = test[i];
        switch(getchar1(temp))
        {
            case NUMBER:
                Push(Ptrs, atof(&temp));
                break;
            case '+':
                item = Pop(Ptrs) + Pop(Ptrs);
                Push(Ptrs, item);
                break;
            case '*':
                item = Pop(Ptrs) * Pop(Ptrs);
                Push(Ptrs, item);
                break;
            case '/':
                op1 = Pop(Ptrs);
                op2 = Pop(Ptrs);
                item = op2/op1;
                Push(Ptrs, item);
                break;
            case '-':
                op1 = Pop(Ptrs);
                op2 = Pop(Ptrs);
                item = op2-op1;
                Push(Ptrs, item);
                break;
            case '\0':
                printf("reuslt: %.8g\n", Pop(Ptrs));
                break;
            default:
                printf("error: unknown command %c\n", temp);
                break;
        }
    }
    return(0);

}