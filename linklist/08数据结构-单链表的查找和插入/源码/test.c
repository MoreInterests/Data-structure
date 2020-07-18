#include "linklist.h"

int main(int argc, const char *argv[])
{
//	linklist p;
	linklist H;
	int n;
	H=list_create();

	list_head_insert(H,10);
	list_head_insert(H,20);
	list_head_insert(H,30);
#if 0
	H=list_create2();
#endif

	list_show(H);
#if 0
	printf("please input pos:");
	scanf("%d",&n);
	if((p=list_get(H,n))!=NULL){
		printf("node data:%d\n",p->data);
	}
#endif
#if 0
	printf("please input value:");
	scanf("%d",&n);
	if((p=list_locate(H,n))!=NULL){
		printf("found:%d\n",p->data);
	}
	else
	{
		printf("not found:%d\n",n);
	}
#endif

	printf("please input pos:");
	scanf("%d",&n);
	if((list_insert(H,n,90))==-1){
		printf("insert failed\n");
	}

	list_show(H);
	return 0;
}
