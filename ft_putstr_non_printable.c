/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ottalhao <ottalhao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 09:40:54 by ottalhao          #+#    #+#             */
/*   Updated: 2025/07/23 09:40:55 by ottalhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_prt_non_prbl_char(unsigned char c)
{
	char	*hex_digits;

	hex_digits = "0123456789abcdef";
	write(1, "\\", 1);
	write(1, &(hex_digits[(c >> 4) & 0x0F]), 1);
	write(1, &(hex_digits[c & 0x0F]), 1);
}

void	ft_putstr_non_printable(char *str)
{
	char	c;
	int		i;

	i = 0;
	while (str[i])
	{
		c = str[i];
		if (c >= 32 && c <= 126)
			write(1, &c, 1);
		else
			ft_prt_non_prbl_char(c);
		i++;
	}
}
