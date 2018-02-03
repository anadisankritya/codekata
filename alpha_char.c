#include <stdio.h>

int main()
{
    char n;int d;
    scanf("%c",&n);
    d=(int)n;
    if((d>=65&&d<=90)||(d>=97&&d<=122))
        printf("Alphabet");
    else
        printf("Not");
    return 0;
}
