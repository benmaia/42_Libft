/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <bmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 19:48:06 by bmiguel-          #+#    #+#             */
/*   Updated: 2021/10/28 19:53:28 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

int		ft_atoi(const char *str);

void	ft_bzero(void *str, size_t n);

int		ft_isalnum(int arg);

int		ft_isalpha(int arg);

int		ft_isascii(int arg);

int		ft_isdigit(int arg);

int		ft_isprint(int arg);

void	*ft_memcpy(void *dest, const void *src, size_t count);

void	*ft_memchr(const void *str, int c, size_t counter);

int		ft_memcmp(const void *s1, const void *s2, size_t counter);

void	*ft_memcpy(void *dest, const void *src, size_t count);

void	*ft_memmove(void *dest, const void *src, size_t counter);

void	*ft_memset(void *str, int c, size_t count);

size_t	ft_strlcat(char *dest, const char *src, size_t n);

char	*ft_strchr(const char *str, int c);

int		ft_strncmp(const char *s1, const char *s2, size_t n);

size_t	ft_strlcpy(char *dest, const char *src, size_t size);

char	*ft_strdup(const char *str);

size_t	ft_strlen(const char *str);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

char	*ft_strrchr(const char *str, int c);

int		ft_tolower(int arg);

int		ft_toupper(int arg);

void	ft_putchar_fd(char c, int fd);

void	ft_putstr_fd(char const *str, int fd);

void	ft_putendl_fd(char const *str, int fd);

void	ft_putnbr_fd(int n, int fd);

void	*ft_memalloc(size_t size);

void	ft_striter(char *s, void (*f)(char *));

void	ft_striteri(char *s, void (*f)(unsigned int, char *s));

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_strjoin(char const *s1, char const *s2);

char	*ft_strtrim(char const *s, char const *set);

char	**ft_split(char const *s, char c);

void	*ft_calloc(size_t n, size_t size);

char	*ft_itoa(int n);

t_list	*ft_lstnew(void *content);

void	ft_lstadd_front(t_list **lst, t_list *new);

int		ft_lstsize(t_list *lst);

t_list	*ft_lstlast(t_list *lst);

void	ft_lstadd_back(t_list **lst, t_list *new);

void	ft_lstdelone(t_list *lst, void (*del)(void *));

void	ft_lstclear(t_list **lst, void (*del)(void *));

void	ft_lstiter(t_list *lst, void (*f)(void *));

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif