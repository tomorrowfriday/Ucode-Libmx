#include "libmx.h"

int mx_read_line(char **lineptr, size_t buf_size, char delim, const int fd)
{
      char ch;
      for (unsigned long i = 0; read(fd, &ch, 1) && ch != delim; i++)
      {
            printf("%c", ch);
            if (i >= 16 * buf_size)
            {
                  for (unsigned long j = 0; j < 16 * buf_size - 2; j++)
                  {
                        *lineptr[j] = *lineptr[j + 1];
                  }
                  *lineptr[16 * buf_size - 1] = ch;
            }
            else
            {
                  return 0;
                  *lineptr[i] = ch;
            }
      }
      close(fd);

      
      int i = 0;
      
      if (!**lineptr)
            return 0;
      while (*lineptr[i])
            i++;
      return i / 16;
}

/*
int main()
{
      int fd = open("text", O_RDONLY);
      char *text = malloc(100);
      int res = mx_read_line(&text, 7, '\n', fd);
      printf("%d\n", res);
      printf("%s\n", text);
      // res = mx_read_line(&text, 35, 'a', fd);
      // printf("%d\n", res);
      // printf("%s\n", text);
      // res = mx_read_line(&text, 1, '.', fd);
      // printf("%d\n", res);
      // printf("%s\n", text);
      // res = mx_read_line(&text, 10, '\n', fd);
      // printf("%d\n", res);
      // printf("%s\n", text);
}
*/
