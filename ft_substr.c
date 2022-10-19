/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 21:14:28 by otaraki           #+#    #+#             */
/*   Updated: 2022/10/16 11:18:47 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *s2;
    size_t i;
    
    s2 = (char *)ft_calloc(len + 1, sizeof(char));
    if (!s || !len)
        return (NULL);
    if (!s2)
        return (NULL);
    if (ft_strlen(s) <= start)
        return (s2);
    i = 0 ;
    while (s[i] && i < len)
    {
        s2[i] = s[start + i];
        i++;        
    }
    return (s2);
}