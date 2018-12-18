#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <string.h>
#include <ctype.h>
//# include <fcntl.h>

void			*ft_memset(void *s, int c, size_t n);
void            ft_bzero(void *s, size_t n);

int				ft_isalpha(int c);
int				ft_isdigit(int c);
int             ft_isalnum(int c);
int             ft_isascii(int c);
int             ft_isprint(int c);

int             ft_toupper(int c);
int             ft_tolower(int c);

int             ft_puts(const char *s);

#endif