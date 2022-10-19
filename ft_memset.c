/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:14:44 by otaraki           #+#    #+#             */
/*   Updated: 2022/10/10 21:04:22 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memset(void *str, int c, size_t n)
{
    size_t i;
    char *s;
    
    i = 0;
    s = (char *)str;
    while (i < n)
    {
        s[i] = (char)c;
        i++;
    }
    return (str);
}