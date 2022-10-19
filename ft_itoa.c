/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 22:17:09 by otaraki           #+#    #+#             */
/*   Updated: 2022/10/16 21:56:06 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static int   ft_len_n(int n)
{
   int i;
   int s;
   long long num = (long long)n;

   i = 0;
   s = -1;
   if(num <= 0)
   {
        num = num * s;
        i++;
   }
   while(num > 0)
   {
        num = num / 10;
        i++;
   }
   return(i);
}
char    *ft_itoa(int n)
{
    char    *ptr;
    int     len;
    long long   num;

    len = ft_len_n(n);
    num = (long long) n;
    ptr = (char *)ft_calloc(len + 1, sizeof(char));
    if (!ptr)
        return (NULL);
    if (num < 0)
    {
        ptr[0] = '-';
        num *= -1;
        while (--len)
        {
            ptr[len] = '0' + num % 10;
            num /= 10;
        }
        return (ptr);
    }
    while (len--)
    {
        ptr[len] = '0' + num % 10;
        num /= 10;
    }
    return (ptr);
}