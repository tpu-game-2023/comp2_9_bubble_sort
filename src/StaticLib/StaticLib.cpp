#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーからほとんど使用されていない部分を除外する
#include "Windows.h"                    // Windows API の機能定義

#include "../include/lib_func.h"

// バブルソート(引数が不適切であればfalseを返す)
bool bubble_sort(item* begin, const item* end)
{
	for (item* items[1]{}, const item* items[2]{};)
		if (items[1] > items[2])
			bubble_sort(items[1], items[2]);
	return true;
	    
	return false;
}
