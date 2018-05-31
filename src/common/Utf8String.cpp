#include "./Utf8String.h"
#include <cstddef>

using std::size_t;

NAMESPACE_BEGIN

size_t Utf8String::CharacterCount() const {
    return 0;
}

int Utf8String::CharAt(size_t character_index) const {
    return 0;
}

char Utf8String::ByteAt(size_t byte_index) const {
    return 'a';
}

size_t Utf8String::ByteCount() const {
    return 0;
}

NAMESPACE_END