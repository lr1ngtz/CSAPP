#include <string.h>
#include "byte_operations.h"

int main(int argc, char const *argv[])
{
    const char *s = "abcdef";
    show_bytes((byte_pointer)s, strlen(s));
    return 0;
}
