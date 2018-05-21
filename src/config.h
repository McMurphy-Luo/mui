#ifndef MUI_CONFIG_H_
#define MUI_CONFIG_H_

#ifdef NAMESPACE_BEGIN
#error you have already defined NAMESPACE_BEGIN
#else
#define NAMESPACE_BEGIN namespace mui {
#define NAMESPACE_END }
#endif

#ifdef MUI_EXPORTS
#error you have already defined SHARED_EXPORTS
#endif

#ifdef _WIN32
#define MUI_WIN32
#endif

#ifdef MUI
#ifdef MUI_WIN32
#define MUI_EXPORTS __declspec(dllexport)
#endif
#else
#ifdef MUI_WIN32
#define SHARED_EXPORTS __declspec(dllimport)
#endif
#endif

#endif // MUI_CONFIG_H_