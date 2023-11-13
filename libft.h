#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int			ft_atoi(char *str);
int			ft_bzero(char *str, int n);
void		*ft_calloc(size_t num_elements, size_t element_size);
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isprint(int c);
void		*ft_memchr(const void *ptr, int value, size_t n);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memmove(void *dest, const void *src, size_t n);
void		*ft_memset(void *str, int c, size_t n);
const char	*ft_strchr(const char *str, int c);
int			ft_strlcpy(char *dest, char *src, int size);
size_t		ft_strlen(const char *str);
int			ft_strncmp(const char *str1, const char *str2, size_t n);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
const char	*ft_strrchr(const char *str, int c);
int			ft_tolower(int c);
int			ft_toupper(int c);
char		*strdup(const char *str);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);
char		*ft_strtrim(char const *s1, char const *set);
char		*ft_itoa(int n);
size_t		strlcpy(char *dest, const char *src, size_t size);
size_t		strlcat(char *dest, const char *src, size_t size);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));

#endif
