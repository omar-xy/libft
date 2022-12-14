/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:00:58 by otaraki           #+#    #+#             */
/*   Updated: 2022/10/16 20:21:16 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
void    ft_striteri(char *s, void (*f)(unsigned int,char *))
{
    int i;

    i = 0;
    if (!s || !f)
        return ;
    while (s[i])
    {
        f(i, &s[i]);
        i++;
    }
}