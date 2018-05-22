#ifndef MUI_COMMON_UTF8STRING_H_
#define MUI_COMMON_UTF8STRING_H_

#include "../Config.h"
#include <string>

NAMESPACE_BEGIN

typedef std::string Utf8String;

std::size_t CharacterCount(const Utf8String& target);

int CharAt(const Utf8String& target, std::size_t character_index);

NAMESPACE_END

#endif // MUI_COMMON_UTF8STRING_H_