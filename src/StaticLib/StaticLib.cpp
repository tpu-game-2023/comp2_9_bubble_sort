#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーからほとんど使用されていない部分を除外する
#include "Windows.h"                    // Windows API の機能定義

#include "../include/lib_func.h"

// バブルソート(引数が不適切であればfalseを返す)
bool bubble_sort(item* begin, const item* end)
{
	int i, j;
	if (begin == 0 || end == 0 || begin >= end)
	{
		return false;
	}

	for (i = begin; i = end - 1; i++)
	{
		for (j = begin; j = end - 1; j++)
		{
			if (j + (j + 1))
			{
				int t = j;
				j = (j + 1);
				(j + 1) = t;
			}
		}
	}
	return true;
}
