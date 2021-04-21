#include "libmx.h"

void mx_print_unicode(wchar_t c){
    setlocale(LC_ALL,"en_US.UTF-8");
    putwchar(c);

}
