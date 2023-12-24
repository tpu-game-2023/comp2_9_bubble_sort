#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーからほとんど使用されていない部分を除外する
#include "Windows.h"                    // Windows API の機能定義

#include "../include/lib_func.h"

// バブルソート(引数が不適切であればfalseを返す)
bool bubble_sort(item* begin, const item* end)
{
	if (begin != 0 && end != 0 && begin <= end)
	{
		for (item* i = begin; i < end - 1; i++)
		{
			int changeFlag = 0;

			for (item* j = begin; j < end - 1; j++)
			{
				if (j->key > (j + 1)->key)
				{
					item num = *(j);
					*(j) = *(j + 1);
					*(j + 1) = num;

					changeFlag = 1;
				}
			}
			if (changeFlag == 0)
			{
				break;
			}
		}

		return true;
	}

	return false;
}
