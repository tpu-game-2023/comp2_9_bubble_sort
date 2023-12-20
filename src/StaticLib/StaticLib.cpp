#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーからほとんど使用されていない部分を除外する
#include "Windows.h"                    // Windows API の機能定義

#include "../include/lib_func.h"

// バブルソート(引数が不適切であればfalseを返す)
bool bubble_sort(item* begin, const item* end)
{
	if(begin==0||end==0||begin>end)
	return false;

	else
	{
		int change = 0;
		item copy;
		int n;
		n = end - begin;

		if (n > 1)
		{
			do
			{
				change = 0;
				for (int i = 0; i < n - 1; i++)
				{
					if ((begin + i)->key > (begin + +i + 1)->key)
					{
						change = 1;
						copy = *(begin + i);
						*(begin + i) = *(begin + i + 1);
						*(begin + i + 1) = copy;
					}
				}
			} while (change);
		}
		
		return true;
	}
}
