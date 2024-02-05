#include "byte_operations.h"

int main(int argc, char const *argv[])
{
    int val = 0x87654321;
    byte_pointer valp = (byte_pointer)&val;
    show_bytes(valp, 1);
    show_bytes(valp, 2);
    show_bytes(valp, 3);
    return 0;
}
