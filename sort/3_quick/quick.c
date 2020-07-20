#include <stdio.h>

#define N 8

void show(int a[]);
int quickpass(int a[],int i,int j);
void quicksort(int a[],int low,int high);
int main(void)
{
      int a[N] = {50,36,66,76,36,12,25,95};
      printf("原无序记录如下:\n");
      show(a);
      printf("排序过程如下:\n");
      quicksort(a,0,N-1);
      
      return 0;
}

//一趟快速排序
int quickpass(int a[],int i,int j)
{
      int tmp;
      tmp = a[i];   //将a[i]作为基准保存
      while(i < j){
	    //从上界比较
	    while(i < j && tmp <= a[j])
		  j--;
	    //将a[j]交换到左边
	    if(i < j)
		  a[i] =a[j];
	    //从下界比较
	    while(i < j && tmp >= a[i])
		  i++;
	    //将a[i]交换到右边
	    if(i < j)
		  a[j] = a[i];
      }
      a[i] = tmp;   //将基准放到最终的位置
      return i;	  //返回基准的下标
}

void quicksort(int a[],int low,int high)
{
      int mid;
      if(low < high){
	    mid = quickpass(a,low,high);   //一趟快速排序 
	    show(a);
	    quicksort(a,low,mid-1);   //基准左边序列进行快速排序
	    quicksort(a,mid+1,high);   //基准右边序列进行快速排序
      }
}

void show(int a[])
{
      int i;
      for(i = 0; i < N; i++)
	    printf("%d\t",a[i]);
      printf("\n");
}



