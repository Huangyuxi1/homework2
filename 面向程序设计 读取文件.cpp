#include <stdio.h>
void read_text(const char* file_name)
{
	char line[1024]={0};
	FILE *file = fopen(file_name,"rt");
	if(!file)
		return;
	while(1)
	{
		//文件读取结束
		if(EOF == fscanf(file,"%s",line))
			break;
		printf("%s\n",line);
	}
	fclose(file);
 
}
int main(int argc, char* argv[])
{
	read_text("test.txt");
	return 0;
}
