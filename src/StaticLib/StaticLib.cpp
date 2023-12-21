#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーからほとんど使用されていない部分を除外する
#include "Windows.h"                    // Windows API の機能定義

#include "../include/lib_func.h"

// バブルソート(引数が不適切であればfalseを返す)
bool bubble_sort(item* begin, const item* end)
{
	if (begin == NULL || end == NULL || begin >= end) return false;

	int const FLG_ON = 1;
	int const FLG_OFF = 0;
	int const N = end - begin;
    int n = 1, flag;
    item tmp;
    int size = sizeof(tmp);

    do
    {
        flag = FLG_OFF;
        for (int i = 0; i < N - n; i++) {
            if (begin[i].key > begin[i + 1].key) {
                flag = FLG_ON;

                memcpy(&tmp, begin + i, size);
                memcpy(begin + i, begin + i + 1, size);
                memcpy(begin + i + 1, &tmp, size);
            }
        }
        n++;
    } while (flag == FLG_ON);
    return true;
}
 