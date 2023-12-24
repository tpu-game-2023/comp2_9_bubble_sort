#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーからほとんど使用されていない部分を除外する
#include "Windows.h"                    // Windows API の機能定義

#include "../include/lib_func.h"
static item* generate(int key, const char* value)
{
	item* p = (item*)malloc(sizeof(item));

	if (p == NULL) return NULL;

	p->key = key;
	int n = (int)strlen(value);
	memcpy(p->value, value, strlen(value) + 1);

	

	return p;
}

// バブルソート(引数が不適切であればfalseを返す)
bool bubble_sort(item* begin, const item* end)
{
	if(begin==NULL||end==NULL)return false;
	while (1)
	{
		item* p = generate(item_::key, value);
		for (int i = 256; i > 0; i--)
		{
			if (p->value[i] > p->value[i - 1])
				break;
			else
			{
				int x = p->value[i];
				p->value[i] = p->value[i - 1];
				p->value[i - 1] = x;
			}
		}
	}
	return true;
}
