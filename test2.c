#include <stdio.h>
int main()
{
    char c;
    float s,a,b;
    a = 0;
    b = 0;
    while((c=getchar())!=' ')
    {
        a = a * 10 + c - '0';
    }
    while((c=getchar())!=' ')
    {
        b = b*10 +c-'0';
    }
    c=getchar();
    switch(c)
    {
        case'+':
        s=a+b;
        printf("The expresion has a value of %.1f",s);
        break;
        case'-':
        s=a-b;
        printf("The expresion has a value of %.1f",s);
        break;
        case'*':
        s=a*b;
        printf("The expresion has a value of %.1f",s);
        break;
        case'/':
        if(b==0)
        {
            printf("Error.Can't find the number.");
        }
        else if(b!=0)
        {
            s=a/b;
            printf("The expresion has a value of %.1f",s);
        }
    }
    return 0;
}
