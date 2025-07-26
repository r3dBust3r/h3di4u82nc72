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
	int				src_len;
	unsigned int	i;

	src_len = ft_strlen(src);
	i = 0;
	while (i < size && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
	return (src_len);
}
