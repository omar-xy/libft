/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:03:08 by otaraki           #+#    #+#             */
/*   Updated: 2022/10/10 16:47:18 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    unsigned char* dst;
    unsigned char* src;
    
    dst = (unsigned char*)s1;
    src = (unsigned char*)s2;
    i = 0;
    if (!n)
        return (0);
    while(i < n - 1 && dst[i] == src[i])
        i++;
    return(dst[i] - src[i]);
}