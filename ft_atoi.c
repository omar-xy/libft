/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:11:29 by otaraki           #+#    #+#             */
/*   Updated: 2022/10/11 02:33:27 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_atoi(const char *str)
{
    int i;
    long long int res;
    int sign;
    
    i = 0;
    res = 0;
    sign = 1;
    
    while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
            i++;
    if(str[i] == '-')
    {
        sign = -1;
        i++;
    }
    if(str[i] == '+')
    {
        sign = 1;
        i++;
    }
    while((str[i] >= '0' && str[i] <= '9'))
    {
        res = res* 10 + str[i] - '0';
        i++;
    }
    return ((int)(sign * res));
}