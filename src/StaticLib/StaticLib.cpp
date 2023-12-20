#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーからほとんど使用されていない部分を除外する
#include "Windows.h"                    // Windows API の機能定義

#include "../include/lib_func.h"

void sortSwap(item* item1, item* item2)
{
	if (item1->key < item2->key)
		return;
	item swap;
	memcpy(&swap, item1, sizeof(*item1));
	memcpy(item1, item2, sizeof(*item2));
	memcpy(item2, &swap, sizeof(swap));
}
// バブルソート(引数が不適切であればfalseを返す)
bool bubble_sort(item* begin, const item* end)
{
	if(begin == NULL || end == NULL) return false;
	int num = end - begin;
	if(num < 1) return false;

	for (int i = 0; i < num - 1; i++)
	{
		for (int j = 0; j < num - i - 1;j++)
		{
			sortSwap(&begin[num - j - 2], &begin[num - j - 1]);
		}
	}
	return true;
}
