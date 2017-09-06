#include <stdio.h>
#include "DBLinkedListD.h"

int main(void)
{
	List list;
	int data;
	ListInit(&list);

	LInsert(&list, 1);
	LInsert(&list, 2);
	LInsert(&list, 3);
	LInsert(&list, 4);
	LInsert(&list, 5);
	LInsert(&list, 6);
	LInsert(&list, 7);
	LInsert(&list, 8);

	if (LFirst(&list, &data))
	{
		printf(" %d", data);
		while (LNext(&list, &data))
			printf("%d ", data);

		printf("\n\n");
	}

	if (LFirst(&list, &data))
	{
		if (data % 2 == 0)
			LRemove(&list);
		while (LNext(&list, &data))
		{
			if (data % 2 == 0)
				LRemove(&list);
		}
	}

	//저장된 데이터의 조회
	if (LFirst(&list, &data))
	{
		printf(" %d", data);
		while (LNext(&list, &data))
			printf("%d ", data);

		printf("\n\n");
	}

	getch();
	return 0;
}