#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーからほとんど使用されていない部分を除外する
#include "Windows.h"                    // Windows API の機能定義

#include "../include/lib_func.h"

// バブルソート(引数が不適切であればfalseを返す)
bool bubble_sort(item* begin, const item* end)
{
	if (degin == NULL || end == NELL || degin >= end)
	{
		return false;
	}
    for (int i = begin; i < end - 1; ++i)
    {
        for (int j = begin; j < end - 1; ++j)
        {
            if (j > (j + 1)) 
            {
                int temp = j;
                j = (j + 1);
                (j + 1) = temp;
            }
        }
    }
	return true;
}
