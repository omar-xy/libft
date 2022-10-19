/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:44:07 by otaraki           #+#    #+#             */
/*   Updated: 2022/10/10 17:29:20 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
char    *ft_strchr(const char *s, int c)
{
    int i;
    char *dst;

    i = 0;
    dst = (char *)s;

    while (dst[i])
    {
        if (dst[i] == c)
            return (&dst[i]);
        i++;
    }
    if (dst[i] == c)
            return (&dst[i]);
    return (NULL);
}