#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp = fopen("test.txt","r");
    char n[100];
    fgets(n,sizeof(n),fp);
    printf("%s",n);
 }
