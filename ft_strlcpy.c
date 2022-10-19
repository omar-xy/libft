/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:14:15 by otaraki           #+#    #+#             */
/*   Updated: 2022/10/11 02:56:41 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t i;

    i = 0;
    if (!dstsize)
        return (ft_strlen(src));
    while(src[i] && i < dstsize - 1) 
    {    
       dst[i] = src[i]; 
       i++;         
    }    
    dst[i] = '\0';    
    return(ft_strlen(src));     
}