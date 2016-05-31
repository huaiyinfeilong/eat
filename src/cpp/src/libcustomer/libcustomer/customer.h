#pragma once

#ifndef EXPORT_LIBEATAPI
#define LIBEATAPI __declspec(dllexport)
#else
#define LIBEATAPI __declspec(dllimport)
#endif


#ifdef __cplusplus
extern "C" {
#endif

LIBEATAPI
LPCSTR
APIENTRY
GetStoreTitleA(
	);

#ifdef UNICODE
#define GetStoreTitle GetStoreTitleW
#else
#define GetStoreTitle GetStoreTitleA
#endif

#ifdef __cplusplus
}
#endif
