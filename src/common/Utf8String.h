#ifndef MUI_COMMON_UTF8STRING_H_
#define MUI_COMMON_UTF8STRING_H_

#include "../Config.h"
#include <string>

NAMESPACE_BEGIN

class Utf8String {
public:
    Utf8String(): buffer_() {

    }

    explicit Utf8String(std::string source) : buffer_(source) {
        // do nothing
    }

    std::size_t CharacterCount() const;

    std::size_t ByteCount() const;

    int CharAt(std::size_t character_index) const;

    char ByteAt(std::size_t byte_index) const;

private:
    std::string buffer_;
};

NAMESPACE_END

#endif // MUI_COMMON_UTF8STRING_H_