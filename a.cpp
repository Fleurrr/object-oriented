#include <stdio.h>
int main()
{
	int a,b,s,flag=0;
	int n=1,i=0;
	char result[20];
	scanf("%d %d",&a,&b);
	s=a+b;
	if(s>999||s<-999)
	{
    if(s<0) 
	{
	flag=1;
	s=s*(-1);
	}	
	while(s>0)
	{
	 result[i++]=s%10+48;
	  if(n%3==0&&s/10!=0)
	   result[i++]=',';
	   s=s/10; 
	   n++; 
	} 
	if(flag==1) 
	{
	result[i++]='-';
    }
   	while(i>=0)
	{
		 printf("%c",result[i--]);
	} 
	printf("\n");
	}
    else
	 {
	 	printf("%d\n",s);
	}
	return 0; 
} 
