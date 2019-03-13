#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length*/

int getline1(char line[], int max);
int strindex(char source[], char searchfor[]);

char pattern[] = "ould"; /* pattern to search for*/

/* find all lines matching pattern */
int main(void)
{
    char line[MAXLINE];
    int found = 0;

    while(getline1(line,MAXLINE)>0)
    {
        int position =  strindex(line, pattern);
        if(strindex(line, pattern) >= 0)
        {
            printf("position=   %d\n", position);
            printf("%s", line);
            found++;
        }
    }
    return found;
}
/* getline: get line into s, return length*/
int getline1(char s[], int lim)
{
    int c, i;
    i = 0;
    while(--lim>0 && (c=getchar())!=EOF && c!='\n')
        s[i++] = c;
    if(c=='\n')
        s[i++] = c;
    s[i] = '\0';
    return i;
}
/* strindex: return index of t in s, -1 if none */
int strindex(char s[], char t[])
{
    int i, j, k;
    int result = -1;
    for(i=0; s[i]!= '\0'; i++){
        for(j=i, k=0; t[k]!='\0' && s[j]==t[k]; j++, k++)
            ;
        if(k>0 && t[k]=='\0'){
            return i;
        }
    }
    return -1;
}

/* strindex: return most right index of t in s, -1 if none */
int strindex2(char s[], char t[])
{
    int i, j, k;
    int result = -1;
    for(i=0; s[i]!= '\0'; i++){
        for(j=i, k=0; t[k]!='\0' && s[j]==t[k]; j++, k++)
            ;
        if(k>0 && t[k]=='\0'){
            result = i;
        }
    }
    return result;
}