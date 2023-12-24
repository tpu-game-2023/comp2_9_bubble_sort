#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーからほとんど使用されていない部分を除外する
#include "Windows.h"                    // Windows API の機能定義

#include "../include/lib_func.h"

// バブルソート(引数が不適切であればfalseを返す)
bool bubble_sort(item* begin, const item* end)
{
	if (begin == NULL || end == NULL || end < begin)
	{
		return false;
	}

	for (item* i = begin; i < end - 1; i++)
	{
		for (item* j = begin; j < end - 1 - (i - begin); j++)
		{
			if ((j + 1)->key < j->key)
			{
				item tmp = *j;
				*j = *(j + 1);
				*(j + 1) = tmp;
			}
		}
	}

	return true;
}
