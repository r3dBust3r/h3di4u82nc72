/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ottalhao <ottalhao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 11:26:55 by ottalhao          #+#    #+#             */
/*   Updated: 2025/07/21 11:27:00 by ottalhao         ###   ########.fr       */
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

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	src_len;
	int	i;

	src_len = ft_strlen(src);
	i = 0;
	while (i < n && i < src_len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
