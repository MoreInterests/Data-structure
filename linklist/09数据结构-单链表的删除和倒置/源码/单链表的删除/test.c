#include "linklist.h"

int main(int argc, const char *argv[])
{
	linklist H;
	int n;

	H=list_create();
	list_head_insert(H,10);
	list_head_insert(H,20);
	list_head_insert(H,30);

	list_show(H);

	printf("please input pos:");
	scanf("%d",&n);
	if((list_delete(H,n))==-1){
		printf("delete failed\n");
	}

	list_show(H);
	return 0;
}
