#include "libft.h"

int main()
{
    int n = 10;
    char buf[n + 1];
    char *string;
    char buf_2[n + 1];
    char *string2;
    memset(buf, 0, n);
    string = (char *) memset(buf,'A', 10);
    printf("\nBuffer contents: %s\n", string);
    memset(buf+5, 'B', 10);
    printf("\nBuffer contents: %s\n", buf);
    ft_memset(buf_2, 0 , n);
    string2 = (char *) ft_memset(buf_2,'A', 10);
    printf("\nBuffer contents 2: %s\n", string2);
    ft_memset(buf_2+5, 'B', 10);
    printf("\nBuffer contents 2: %s\n", buf_2);
}
