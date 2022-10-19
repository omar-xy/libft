/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:50:14 by otaraki           #+#    #+#             */
/*   Updated: 2022/10/10 16:59:43 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    char *dst;

    i = 0;
    dst = (char *)s;
    
    while (i < n)
    {
        if(dst[i] == c)
            return (&dst[i]);
        i++;
    }
    return (NULL);
}