//������н��
#include <stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("result.dat","w");
	fprintf(fp,"%s",s);
	fclose(fp);
	
 } 
