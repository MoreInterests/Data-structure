#include <stdio.h>

#define N 8

void show(int a[]);
void seqsearch(int a[]);
int main(void)
{
      int a[N] = {50,36,66,76,95,12,25,36};
      printf("原无序记录如下:\n");
      show(a);
      printf("排序过程如下:\n");
      seqsearch(a);
      return 0;
}

void show(int a[])
{
      int i;
      for(i = 0; i < N; i++)
	    printf("%d\t",a[i]);
      printf("\n");
}

void seqsearch(int a[])
{
      int i,j,tmp;
      for(i = 1; i < N; i++){
	    tmp = a[i];
	    for(j = i-1;j >= 0; j--)
		  if(tmp < a[j])
			a[j+1] = a[j];
		  else
			break;
	    a[j+1] = tmp;
	    show(a);
      }
}
