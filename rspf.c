#include <stdio.h>
#include <string.h>
int main ()
{
	char str[5];
	gets(str);


	FILE *fp;
    fp = fopen("test", "w");

    fputs(str, fp);

    int fclose(FILE *fp);
}