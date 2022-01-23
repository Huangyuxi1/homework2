#include <stdio.h>
#include <math.h>
int main()
{
    long long num,j;int temp;
	int i=0;
    long long arr[1220];
    int ip[4]={0};
    int m=1;
    printf("请输入一个十进制数：\n");
    scanf("%lld", &num);
     do
    {
    temp=num%2;
    num=num/2;
    arr[i]=temp; 
    i++;
    }
    while (num!=0);
//    for(j=i-1;j>=0;j--)
  // printf("%lld",arr[j]);
    for(i=0;i<4;i++)
    {
    	m=1;
    	for(j=i*8+7;j>=8*i;j--)
    	{
    		ip[i]+=m*arr[31-j];
    		m*=2; 
		}
	}
	for(i=0;i<4;i++)
	printf("%d.",ip[i]);
	return 0;
}




