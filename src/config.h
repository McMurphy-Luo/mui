#ifndef MUI_CONFIG_H_
#define MUI_CONFIG_H_

#ifdef NAMESPACE_BEGIN
#error you have already defined NAMESPACE_BEGIN
#else
#define NAMESPACE_BEGIN namespace mui {
#define NAMESPACE_END }
#endif

#ifdef MUI
#ifdef SHARED_EXPORTS
#error you have already defined SHARED_EXPORTS
#else
#ifdef WIN32_
#define SHARED_EXPORTS __declspec(dllexport)
#endif
#endif

#endif // MUI_CONFIG_H_