#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <wchar.h>


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

//int mx_itoa(int num);

