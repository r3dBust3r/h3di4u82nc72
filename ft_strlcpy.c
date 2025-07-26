/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ottalhao <ottalhao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 09:16:54 by ottalhao          #+#    #+#             */
/*   Updated: 2025/07/23 09:16:56 by ottalhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char str[])
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	src_len;
	int	i;
	int	int_size;

	src_len = ft_strlen(src);
	int_size = size;
	i = 0;
	while (i < int_size && i < src_len)
	{
		dest[i] = src[i];
		i++;
	}
	if (int_size != 0)
		dest[i] = '\0';
	return (src_len);
}
