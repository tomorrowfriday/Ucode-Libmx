#include "libmx.h"

void *mx_realloc(void *ptr, size_t size){
    size_t oldsize = mx_getsize(ptr);
    void *nptr = malloc(size);
    if (nptr == NULL) {
        return NULL;
    }
    if (size <= 0 && ptr)
    {
        free(ptr);
        return NULL;
    }
  // «old_size» должен быть известен :)
  // (например, запишите его в начало выделенного блока)
    mx_memcpy(nptr, ptr, oldsize);
    free(ptr);
    return nptr;
}
