#include "btree.h"

int main(int argc, const char *argv[])
{
	btree_pnode t;

	create_btree(&t);//创建二叉树

	travel("先序遍历序列:",pre_order,t);

	travel("先序非递归遍历序列:",unpre_order,t);

	travel("中序遍历序列:",mid_order,t);

	travel("后序遍历序列:",post_order,t);

	travel("层次遍历序列:",level_order,t);

	return 0;
}
