#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーからほとんど使用されていない部分を除外する
#include "Windows.h"                    // Windows API の機能定義

#include "../include/lib_func.h"
#include<stdlib.h>
#include<string.h>
// バブルソート(引数が不適切であればfalseを返す)
bool bubble_sort(item* begin, const item* end)
{
	if (begin == NULL)
		return false;
	else if (begin > end)
		return false;
	else
	{
		int n = (end - begin) /sizeof(item_*);
		for (int i = n - 1; i > 0 ; i--) {
			for (int j = 0;j<n-1 ; j++) {
				if (begin[j].key>begin[j-1].key)
				{
					item_ temp = begin[j];
					begin[j] = begin[j-1];
					begin[j-1] = temp;
				}
			}
		}
	}
}
