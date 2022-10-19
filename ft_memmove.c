/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:34:19 by otaraki           #+#    #+#             */
/*   Updated: 2022/10/16 11:51:27 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void  *ft_memmove(void *s1, const void *s2, size_t n)
{
    
    unsigned char *dst;
    unsigned char *src;

    
    
    dst = (unsigned char *)s1;
    src = (unsigned char *)s2;
    if(src < dst) // trying to handel the overlap.
        while(n-- > 0)
            dst[n] = src[n];
    else
        ft_memcpy(s1,s2,n);// we don't need to handle it here.
    return (s1);
}