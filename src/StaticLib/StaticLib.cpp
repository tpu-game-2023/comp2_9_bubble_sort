#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーからほとんど使用されていない部分を除外する
#include "Windows.h"                    // Windows API の機能定義

#include "../include/lib_func.h"

// バブルソート(引数が不適切であればfalseを返す)
bool bubble_sort(item* begin, const item* end)
{
	if (!begin || !end || begin > end)
		return false;
	for (item* i = begin; i < end - 1; i++) {
		for (item* j = begin; j < end - (i - begin) - 1; j++) {
			if (j->key > (j + 1)->key) {
				item tmp = *j;
				*j = *(j + 1);
				*(j + 1) = tmp;
			}
		}
	}
	return true;
}