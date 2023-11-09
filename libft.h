    #ifndef LIBFT.H
    #define LIBFT.H

    #include <stddef.h>;
    #include <stdlib.h>;
    #include "libft.h";
    
    int	ft_atoi(char *str);
    int	ft_bzero(char *str, int n);
    void	*ft_calloc(size_t num_elements, size_t element_size);
    int	ft_isalnum(int c);
    int	ft_isalpha(int c);
    int	ft_isascii(int c);
    int	ft_isdigit(int c);
    int	ft_isprint(int c);
    void	*ft_memchr(const void *ptr, int value, size_t n);
    void	*ft_memcpy(void *dest, const void *src, size_t n);
    void	*ft_memmove(void *dest, const void *src, size_t n);
    void	*ft_memset(void *str, int c, size_t n);
    const char	*ft_strchr(const char *str, int c);
    int	ft_strlcpy(char *dest, char *src, int size);
    int	ft_strlen(char *str);
    int	ft_strncmp(const char *str1, const char *str2, size_t n);
    char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
    const char	*ft_strrchr(const char *str, int c);
    int	ft_tolower(int c);
    int	ft_toupper(int c);

    #endif
