/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 22:01:25 by otaraki           #+#    #+#             */
/*   Updated: 2022/10/12 23:10:53 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_putnbr_fd(int n, int fd)
{
    if(n == INT_MIN)
        {
            ft_putstr_fd("-2147483648", fd);
        }
    else if(n < 0)
    {
        ft_putchar_fd('-', fd);
        n = -n;
    }  
    else if(n >= 10)
    {
        ft_putnbr_fd((n / 10), fd);
        ft_putnbr_fd((n % 10), fd);
    }
    else if (n >= 0 && n <= 9)
    {
        ft_putchar_fd(n + 48, fd);
    }
}