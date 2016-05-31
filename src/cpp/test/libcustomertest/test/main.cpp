#include <stdio.h>
#include <windows.h>
#include <customer.h>
#include <assert.h>

int main()
{
	LPCSTR lpszStoreTitle = GetStoreTitleA();
	assert(!strcmp(lpszStoreTitle, "好吃点") && strlen(lpszStoreTitle) == strlen("好吃点"));
}
