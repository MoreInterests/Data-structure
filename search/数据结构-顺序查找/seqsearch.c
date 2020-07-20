#include<stdio.h>

#define N 10
int seqsearch(int *a,int key);

int main(int argc, const char *argv[])
{
	int a[]={12,2,3,5,2,8,7,6,9,11};
	int i,key;
	char ch;

	while(1)
	{
		printf("please input key:");
		scanf("%d",&key);
		i=seqsearch(a,key);
		if(i==-1)
			puts("search error!");
		else
			printf("search %d at %d\n",key,i);
		printf("continue?(Y/y):");
		while(getchar()!='\n');
		scanf("%c",&ch);
		if(ch=='y'||ch=='Y')
			continue;
		else
			break;
	}
	return 0;
}

int seqsearch(int *a,int key)
{
	int i;
	for(i=N-1;i>=0;i--)
	{
		if(key==a[i])
			return i;
	}

	return -1;

}
