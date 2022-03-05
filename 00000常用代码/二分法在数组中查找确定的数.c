#include <stdio.h>
#define N 10
void px_s(int []);//冒泡排序，升序 
void px_j(int []);//冒泡排序，降序 
int find_s(int [],int,int,int);//在升序排序后找某个确定的数 
int find_j(int [],int,int,int);//在降序排序后找某个确定的数
int a[N],i,find;
int main()
{
	for(i=0;i<N;i++)
	scanf("%d",&a[i]);
	px_s(a);
	for(i=0;i<N;i++)
	printf("%d ",a[i]);
	printf("\n");
	scanf("%d",&find);
	printf("%d\n",find_s(a,find,0,N-1));
	px_j(a);
	for(i=0;i<N;i++)
	printf("%d ",a[i]);
	printf("\n");
	scanf("%d",&find);
	printf("%d\n",find_j(a,find,0,N-1));
 	return 0;
}

void px_s(int m[N]) 
{
	int i,j,swag,flag;
	for(i=1;i<N;i++)
	{
		flag=0;
		for(j=0;j<N-i;j++)
		{
			if(m[j]>m[j+1])
			{
				swag=m[j+1];
				m[j+1]=m[j];
				m[j]=swag;
				flag=1;
			}
		}
		if(flag==0)
		break;
	}
}

void px_j(int m[N]) 
{
	int i,j,swag,flag;
	for(i=1;i<N;i++)
	{
		flag=0;
		for(j=0;j<N-i;j++)
		{
			if(m[j]<m[j+1])
			{
				swag=m[j];
				m[j]=m[j+1];
				m[j+1]=swag;
				flag=1;
			}
		}
		if(flag==0)
		break;
	}
}

int find_s(int m[],int key,int qi,int mo)//找数，有则返回数的下标，没有返回-1 
{
	int mid;
	if(qi>mo)
	return -1;
	mid=(qi+mo)/2;
	if(m[mid]==key)
	return mid;
	if(m[mid]>key)
	return find_s(m,key,qi,mid-1);
	if(m[mid]<key)
	return find_s(m,key,mid+1,mo);
}

int find_j(int m[],int key,int qi,int mo)//找数，有则返回数的下标，没有返回-1 
{
	int mid;
	if(qi>mo)
	return -1;
	mid=(qi+mo)/2;
	if(m[mid]==key)
	return mid;
	if(m[mid]>key)
	return find_s(m,key,mid+1,mo);
	if(m[mid]<key)
	return find_s(m,key,qi,mid-1);
}
