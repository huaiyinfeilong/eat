#include <stdio.h>
#include <windows.h>
#include <customer.h>
#include <assert.h>

int main()
{
	LPCSTR lpszStoreTitle = GetStoreTitleA();
	assert(!strcmp(lpszStoreTitle, "�óԵ�") && strlen(lpszStoreTitle) == strlen("�óԵ�"));
}
