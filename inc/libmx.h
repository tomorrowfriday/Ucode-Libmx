#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <wchar.h>
#include <malloc.h>
#include <fcntl.h>
#include <stddef.h>

typedef struct s_list
{
    void *data;
    struct s_list *next;
} t_list;

void mx_printchar(char c);
void mx_printstr(const char *s);
void mx_printint(int n);
int mx_bubble_sort(int *arr, int size);
double mx_pow(double n, unsigned int pow);
int mx_sqrt(int x);
void mx_foreach(int *arr, int size, void (*f)(int));
int mx_binary_search(char **arr, int size, const char *s, int *count);
int mx_strlen(const char *s);
char *mx_strcpy(char *dst, const char *src);
int mx_strcmp(const char *s1, const char *s2);
char *mx_strnew(const int size);
char *mx_strdup(char *src);
void mx_print_strarr(char **arr, const char *delim);
int mx_quicksort(int *arr, int left, int right);
char *mx_itoa(int num);
void mx_print_unicode(wchar_t c);
void mx_swap_char(char *s1, char *s2);
char *mx_nbr_to_hex(unsigned long nbr);
void mx_str_reverse(char *s);
char *mx_strjoin(const char *s1, const char *s2);
void mx_strdel(char **str);
void mx_del_strarr(char ***arr);
void *mx_memset(void *b, int c, size_t len);
int mx_file_len(const char *file);
char *mx_file_to_str(const char *file);
char *mx_strncpy(char *dst, const char *src, int len);
char *mx_strndup(const char *src, size_t n);
unsigned long mx_hex_to_nbr(const char *hex);
void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n);
int mx_memcmp(const void *s1, const void *s2, size_t n);
void *mx_realloc(void *ptr, size_t size);
size_t mx_getsize(void * p);
t_list *mx_create_node(void *data);
void mx_push_front(t_list **list, void *data);
void mx_push_back(t_list **list, void *data);


//int mx_itoa(int num);

