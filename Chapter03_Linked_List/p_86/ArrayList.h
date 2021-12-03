#ifndef __ARRAY_LIST_H
#define __ARRAY_LIST_H

#include "Point.h"

#define TRUE	1
#define FALSE	0

#define LIST_LEN	100
typedef Point *Ldata;

typedef struct __ArrayList
{
	Ldata arr[LIST_LEN];
	int numOfData;			// 저장된 데이터의 수
	int curPosition;		// 데이터의 참조위치
} ArrayList;

typedef ArrayList List;

void ListInit(List *plist);
void LInsert(List *plist, Ldata data);

int LFirst(List *plist, Ldata *pdata);
int LNext(List *plist, Ldata *pdata);

Ldata LRemove(List *plist);
int Lcount(List *plist);

#endif
