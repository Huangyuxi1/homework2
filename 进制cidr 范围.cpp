#include <stdio.h>
int change(int a,int b,int c,int d);
int back(int a[6]);
int count(int m);
int main()

{
	int a,b,c,d,e,s1,s2,s3,s4,f[1000],j[1000];
	scanf("%d.%d.%d.%d/e",&a,&b,&c,&d,&e);
	s1=count(a);
	s2=count(b);
	s3=count(c);
	s4=count(d);
	f=change(int a,int b,int c,int d);
	j=change(int a,int b,int c,int d);
	for(i=e-1;i<s1+s2+s3+s4;i++)
	{
	   f[i]=0;	
	}
	back(f);
	for(i=e-1;i<s1+s2+s3+s4;i++)
	{
	   j[i]=1;	
	}
	back(j);
}
int change(int a,int b,int c,int d)
{
	int m[1000],i=0,n;
	while(a>0)
	{
		n=a%2;
		n/=2;
		m[i]=n;
		i++;
	}
		while(b>0)
	{
		n=b%2;
		n/=2;
		m[i]=n;
		i++;
	}
		while(c>0)
	{
		n=c%2;
		n/=2;
		m[i]=n;
		i++;
	}
		while(d>0)
	{
		n=d%2;
		n/=2;
		m[i]=n;
		i++;
	}
	return m;
}
int back(int a[6])
{
	
	int m=0,n=0,j=0,k=0;
	int l=1;
	char x[1000];
	for(i=7;i>=0;i--)
	{
		m+=(a[i]*l);
		l*=2;
	}
	l=1;
	for(i=15;i>=8;i--)
	{
		n+=(a[i]*l);
		l*=2;
	}
	l=1;
	for(i=23;i>=16;i--)
	{
		j+=(a[i]*l);
		l*=2;
	}
	l=1;
	for(i=31;i>=24;i--)
	{
		k+=(a[i]*l);
		l*=2;
	}
	a[0]=m;
	a[2]=n;
	a[4]=j;
	a[6]=k;
	return a;
}
int count(n)
{
	int sum=0;
	while(n!=0)
	{
		n/=10;
		sum++;
	}
	return sum;
}
