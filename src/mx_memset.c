#include "libmx.h"

void *mx_memset(void *b, int c, size_t len) {
    unsigned char *s = b;
    // for (; len>=0; len--){
    //     s[len] = (unsigned char) c;
    // }
    while (len > 0) {
        *s = (unsigned char) c;
        s++;
        len--;
    }
    // size_t k;

    // /* Fill head and tail with minimal branching. Each
    //  * conditional ensures that all the subsequently used
    //  * offsets are well-defined and in the dest region. */

    // if (!len) return b;
    // s[0] = s[len-1] = c;
    // if (len <= 2) return b;
    // s[1] = s[len-2] = c;
    // s[2] = s[len-3] = c;
    // if (len <= 6) return b;
    // s[3] = s[len-4] = c;
    // if (len <= 8) return b;

    // /* Advance pointer to align it at a 4-byte boundary,
    //  * and truncate n to a multiple of 4. The previous code
    //  * already took care of any head/tail that get cut off
    //  * by the alignment. */

    // k = -(uintptr_t)s & 3;
    // s += k;
    // len -= k;
    // len &= -4;
    // len /= 4;

    // uint32_t *ws = (uint32_t *)s;
    // uint32_t wc = c & 0xFF;
    // wc |= ((wc << 8) | (wc << 16) | (wc << 24));

    // /* Pure C fallback with no aliasing violations. */
    // for (; len; len--, ws++) *ws = wc;
    return b;
}
